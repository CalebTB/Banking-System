//
// Created by Caleb Byers on 8/10/2025.
//
#include <iostream>

#include "SavingAccount.h"

void SavingsAccount::deposit()
{
    const double tempBalance = savingsBalance;
    savingsBalance = (randomDepositNumberGenerator()) + savingsBalance;
    std::cout << "Added $" << savingsBalance - tempBalance << " to the saving account!" <<  "\n";
}

void SavingsAccount::transfer() {
    //do nothing
}

void SavingsAccount::addInterestAPY()
{
    const double tempBalance = savingsBalance;
    savingsBalance += savingsBalance * APY_rate;
    std::cout << "Added $" << savingsBalance - tempBalance << " to the account this year!" << "\n";
}

void SavingsAccount::display() const
{
    std::cout << "Savings Balance: " << savingsBalance  << "\n";
}
