#include "elf.hpp"

#include <fstream>

Elf::Elf()
{

}

Elf::~Elf()
{

}

bool Elf::IsValid(std::string path)
{
    std::fstream file;
    file.open(path, std::ios::in | std::ios::binary);
    if (file.fail())
        return false;

    unsigned char fileID[4];
    file.read((char *)fileID, 4);

    bool valid = false;
    if (fileID[0] == 0x7F && fileID[1] == 'E' && fileID[2] == 'L' && fileID[3] == 'F')
        valid = true;

    file.close();

    return valid;
}

void Elf::Read(std::string path)
{

}

void Elf::Write(std::string path) const
{

}

int Elf::GetType() const
{
    return TYPE_ELF;
}
