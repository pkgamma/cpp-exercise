cmake_minimum_required(VERSION 3.12)
project(cpp_exercise)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_exercise
        main
        main.cpp
        README.md)
