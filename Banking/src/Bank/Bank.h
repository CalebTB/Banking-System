#pragma once
#include <iostream>
#include <ostream>

class Bank
{
public:
int number;
    
    Bank()
        : number(1)
    {
        std::cout << "Bank constructor" << std::endl;
        std::cout << "Number: " << number << std::endl;
    }
};
