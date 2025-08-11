cmake_minimum_required(VERSION 4.0)
project(Banking_System)

set(CMAKE_CXX_STANDARD 14)

include_directories(BankingCode/src)
include_directories(BankingCode/src/Bank)
include_directories(BankingCode/src/Interfaces)
include_directories(BankingCode/src/Utilities)

add_executable(Banking_System
        BankingCode/main.cpp

        BankingCode/src/Bank/Bank.cpp
        BankingCode/src/Bank/SavingAccount.cpp
        BankingCode/src/Bank/CheckingAccount.cpp

        BankingCode/src/Interfaces/IAccount.h
        BankingCode/src/Utilities/Utilities.h
)
