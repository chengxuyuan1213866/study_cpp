cmake_minimum_required(VERSION 3.25)
project(Demo)

set(CMAKE_CXX_STANDARD 17)
add_executable(Demo
        demo/triangle/Point.h
        demo/triangle/Point.cpp
        demo/triangle/Triangle.h
        demo/triangle/Triangle.cpp
        demo/triangle/Main.cpp

)