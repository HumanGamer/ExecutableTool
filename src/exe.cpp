#include "exe.hpp"

#include <fstream>

Exe::Exe()
{

}

Exe::~Exe()
{

}

bool Exe::IsValid(std::string path)
{
    std::fstream file;
    file.open(path, std::ios::in | std::ios::binary);
    if (file.fail())
        return false;

    unsigned char fileID[2];
    file.read((char *)fileID, 2);

    bool valid = false;
    if (fileID[0] == 'M' && fileID[1] == 'Z')
        valid = true;

    file.close();

    return valid;
}

void Exe::Read(std::string path)
{

}

void Exe::Write(std::string path) const
{

}

int Exe::GetType() const
{
    return TYPE_EXE;
}
