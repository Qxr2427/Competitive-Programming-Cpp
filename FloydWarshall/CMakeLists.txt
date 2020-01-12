cmake_minimum_required(VERSION 3.14)
project(FloydWarshall)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++0x")

add_executable(FloydWarshall main.cpp)