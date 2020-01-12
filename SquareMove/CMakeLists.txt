cmake_minimum_required(VERSION 3.14)
project(SquareMove)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--stack,3000000")

add_executable(SquareMove main.cpp)