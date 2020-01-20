#pragma once

#include "executable.hpp"

#define TYPE_MACH 2

class Mach : public Executable
{
public:
    Mach();
    virtual ~Mach();

    static bool IsValid(std::string path);
    void Read(std::string path);
    void Write(std::string path) const;
    int GetType() const;
};
