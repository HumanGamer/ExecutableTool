#pragma once

#include "executable.hpp"

#define TYPE_EXE 0

class Exe : public Executable
{
public:
    Exe();
    virtual ~Exe();

    static bool IsValid(std::string path);
    void Read(std::string path);
    void Write(std::string path) const;
    int GetType() const;
};
