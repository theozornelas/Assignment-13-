cmake_minimum_required(VERSION 3.5)
project(Assignment_13_Lyan)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${dir}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${dir}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${dir}/bin")

set(SOURCE_FILES ASS12_Graph.cpp Graph.cpp Graph.h)
add_executable(Assignment_13_Lyan ${SOURCE_FILES})