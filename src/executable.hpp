#pragma once

#include <string>

class Executable
{
    public:
        Executable();
        virtual ~Executable();

        static Executable* LoadExecutable(std::string path);

        virtual void Read(std::string path) = 0;
        virtual void Write(std::string path) const = 0;
        virtual int GetType() const = 0;
};