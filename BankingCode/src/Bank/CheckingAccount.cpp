//
// Created by Caleb Byers on 8/10/2025.
//
#include <iostream>

#include "CheckingAccount.h"
#include "Bank.h"
#include "Utilities.h"

CheckingAccount::CheckingAccount() { balance = Utilities::randomDepositNumberGenerator(); }

void CheckingAccount::display() { std::cout << "CHECKING:\t\t|$" << balance << std::endl; }

void CheckingAccount::deposit()
{
    const double tempBalance = balance;
    balance                  = (Utilities::randomDepositNumberGenerator()) + balance;
    std::cout << "Added $" << balance - tempBalance << " to the checking account!" << "\n";
}

void CheckingAccount::withdraw()
{
    double userBalance;

    std::cout << "Enter balance to withdraw: ";
    std::cin >> userBalance;

    balance -= userBalance;
    if (balance < -overdraftLimit)
    {
        int counter = 0;
        for (int i = balance; i < checkingBalanceMinimumAfterOverDraft; i++) { counter++; }

        overdraftAmountOutOfSavings = (counter + overdraftFee);
        balance += overdraftAmountOutOfSavings;
        std::cout << "Overdraft + Fee: $" << overdraftAmountOutOfSavings << std::endl;
    }
    std::cout << "Amount after withdrawal: $" << balance << std::endl;
}
