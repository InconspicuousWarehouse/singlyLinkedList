cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/cProdukt.cpp headers/cProdukt.h src/cWarzywo.cpp headers/cWarzywo.h src/cBaza.cpp headers/cBaza.h src/cWezel.cpp headers/cWezel.h)
