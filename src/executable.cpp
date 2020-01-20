#include "executable.hpp"

#include "exe.hpp"
#include "elf.hpp"
#include "mach.hpp"

Executable::Executable()
{

}

Executable::~Executable()
{

}

Executable* Executable::LoadExecutable(std::string path)
{
    Executable* result;

    if (Exe::IsValid(path))
        result = new Exe();
    else if (Elf::IsValid(path))
        result = new Elf();
    else if (Mach::IsValid(path))
        result = new Mach();
    else
        return nullptr;

    result->Read(path);

    return result;
}