#include <random>
#include "Bank.h"

int Bank::randomNumberGenerator() {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1000000, 2000000);

    return dis(gen);
}

void Bank::deposit()
{
    balance = (randomNumberGenerator() - 1000000) + balance;
}


void Bank::withdraw()
{
    balance -= 10000;
}

void Bank::display()
{
    std::cout << "Account Number: " << accountNumber << "\n";
    std::cout << "Starting Balance: $"<< balance << "\n";
}
