cmake_minimum_required(VERSION 3.17)
project(aoc_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(aoc_cpp main.cpp helpers.cpp helpers.h day1.cpp day1.h)

configure_file(input/day1.txt input/day1.txt COPYONLY)