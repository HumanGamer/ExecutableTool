#pragma once

#include "executable.hpp"

#define TYPE_ELF 1

class Elf : public Executable
{
public:
    Elf();
    virtual ~Elf();

    static bool IsValid(std::string path);
    void Read(std::string path);
    void Write(std::string path) const;
    int GetType() const;
};
