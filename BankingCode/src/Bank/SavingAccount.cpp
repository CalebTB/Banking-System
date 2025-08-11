//
// Created by Caleb Byers on 8/10/2025.
//
#include <iostream>

#include "SavingAccount.h"
#include "Utilities.h"

SavingsAccount::SavingsAccount() { balance = Utilities::randomDepositNumberGenerator(); }

void SavingsAccount::display() { std::cout << "SAVINGS:\t\t|$" << balance << std::endl; }

void SavingsAccount::deposit()
{
    const double tempBalance = balance;
    balance = (Utilities::randomDepositNumberGenerator()) + balance;
    std::cout << "Added $" << balance - tempBalance << " to the savings account!" << "\n";
    std::cout << "New balance: " << balance << std::endl;
}

void SavingsAccount::withdraw()
{
    double userBalance;

    std::cout << "Enter balance to withdraw: ";
    std::cin >> userBalance;

    balance -= userBalance;
}

/*
void SavingsAccount::addInterestAPY()
{
    const double tempBalance = savingsBalance;
    savingsBalance += savingsBalance * APY_rate;
    std::cout << "Added $" << savingsBalance - tempBalance << " to the account this year!" << "\n";
}
*/
