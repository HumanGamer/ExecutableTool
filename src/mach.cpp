#include "mach.hpp"

#include <fstream>

Mach::Mach()
{

}

Mach::~Mach()
{

}

bool Mach::IsValid(std::string path)
{
    std::fstream file;
    file.open(path, std::ios::in | std::ios::binary);
    if (file.fail())
        return false;

    unsigned char fileID[4];
    file.read((char*)fileID, 4);

    bool valid = false;
    if (fileID[0] == 0xFE && fileID[1] == 0xED && fileID[2] == 0xFA && (fileID[3] == 0xCE || fileID[3] == 0xCF))
        valid = true;
    if ((fileID[0] == 0xCE || fileID[0] == 0xCF) && fileID[1] == 0xFA && fileID[2] == 0xED && fileID[3] == 0xFE)
        valid = true;

    file.close();

    return valid;
}

void Mach::Read(std::string path)
{

}

void Mach::Write(std::string path) const
{

}

int Mach::GetType() const
{
    return TYPE_MACH;
}
