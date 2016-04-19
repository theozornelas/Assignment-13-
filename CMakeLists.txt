cmake_minimum_required(VERSION 3.5)
project(Assignment_13_Lyan)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 12_screenIO.txt ASS12_Graph.cpp ASS12_Graph_out.txt Graph.cpp Graph.h)
add_executable(Assignment_13_Lyan ${SOURCE_FILES})