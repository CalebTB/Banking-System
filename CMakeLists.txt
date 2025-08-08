cmake_minimum_required(VERSION 4.0)
project(Banking_System)

set(CMAKE_CXX_STANDARD 14)

include_directories(BankingCode/src)
include_directories(BankingCode/src/Bank)

add_executable(Banking_System
        BankingCode/src/Bank/Bank.cpp
        BankingCode/src/Bank/Bank.h
        BankingCode/main.cpp)
