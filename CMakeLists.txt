cmake_minimum_required(VERSION 3.10)
project(MyVector)

set(CMAKE_CXX_STANDARD 14)

add_executable(MyVector main.cpp Vector.cpp Vector.h Geometry.h)