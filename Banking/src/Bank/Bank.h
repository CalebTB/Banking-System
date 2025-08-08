#pragma once
#include <iostream>
#include <ostream>

class Bank
{
    public:
        Bank()
            : accountNumber(0),
              balance(10.0)
        {
            accountNumber = randomNumberGenerator();
        }

        //random number balance
        void deposit();

        static int randomNumberGenerator();

        virtual void withdraw();
        virtual void display();

    ~Bank()
    = default;

    private:
        int accountNumber;
        double balance;


};
