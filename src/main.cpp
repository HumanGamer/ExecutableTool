#include <iostream>

#include "executable.hpp"
#include "exe.hpp"
#include "elf.hpp"
#include "mach.hpp"

int main(int argc, const char **argv)
{
    if (argc < 2)
    {
        std::cout << "Usage: exectool <executable>" << std::endl;
        return 0;
    }

    Executable *executable = Executable::LoadExecutable(argv[1]);
    if (executable == nullptr)
    {
        std::cout << "Invalid Executable: " << argv[1] << std::endl;
        return 1;
    }

    std::string typeName;
    switch (executable->GetType())
    {
    case TYPE_EXE:
        typeName = "EXE";
        break;
    case TYPE_ELF:
        typeName = "ELF";
        break;
    case TYPE_MACH:
        typeName = "MACH-O";
        break;
    default:
        typeName = "???";
        break;
    }
    std::cout << "Type: " << typeName << std::endl;

    delete executable;

    return 0;
}
