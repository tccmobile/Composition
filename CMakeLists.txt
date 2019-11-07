cmake_minimum_required(VERSION 3.12)
project(Composition)

set(CMAKE_CXX_STANDARD 14)

add_executable(Composition main.cpp Child.cpp Child.h Parent.cpp Parent.h)