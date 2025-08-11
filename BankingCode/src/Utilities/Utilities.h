//
// Created by Caleb Byers on 8/10/2025.
//

#ifndef BANKING_SYSTEM_UTILITIES_H
#define BANKING_SYSTEM_UTILITIES_H

#include <random>

class Utilities
{
public:
    static int randomAccountNumberGenerator()
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1000000, 2000000);

        return dis(gen);
    }

    static int randomDepositNumberGenerator()
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, 5000);

        return dis(gen);
    }
};


#endif //BANKING_SYSTEM_UTILITIES_H
