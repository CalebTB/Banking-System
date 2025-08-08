cmake_minimum_required(VERSION 4.0)
project(Banking_System)

set(CMAKE_CXX_STANDARD 14)

include_directories(Banking/src)
include_directories(Banking/src/Bank)

add_executable(Banking_System
        Banking/src/Bank/Bank.cpp
        Banking/src/Bank/Bank.h
        Banking/src/test.cpp
        Banking/src/test.h
        Banking/main.cpp)
