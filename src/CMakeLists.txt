cmake_minimum_required(VERSION 2.8)

set(SOURCE_FILES
    # Sources
    main.cpp
    executable.cpp
    exe.cpp
    elf.cpp
    mach.cpp
    
    # Headers
    exe.hpp
    executable.hpp
    elf.hpp
    mach.hpp
)

add_executable(exectool ${SOURCE_FILES})
