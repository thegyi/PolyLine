cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp Section.cpp Section.h Point.cpp Point.h PolyLine.cpp PolyLine.h PolyLineTest.cpp PolyLineTest.h)
target_link_libraries(untitled gtest pthread)