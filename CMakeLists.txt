cmake_minimum_required(VERSION 3.14)
project(Assembly_Interpreter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Assembly_Interpreter
        Compiler.h
        Constants.h
        datatypes.h
        Error.h
        functions.h
        Instructions.h
        interfaces.h
        Register.h
        Source.cpp)
