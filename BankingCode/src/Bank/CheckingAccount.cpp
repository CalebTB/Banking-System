//
// Created by Caleb Byers on 8/10/2025.
//
#include <iostream>

#include "CheckingAccount.h"
#include "SavingAccount.h"

void CheckingAccount::deposit()
{
    const double tempBalance = checkingBalance;
    checkingBalance = (randomDepositNumberGenerator()) + checkingBalance;
    std::cout << "Added $" << checkingBalance - tempBalance << " to the checking account!" <<  "\n";
}

double CheckingAccount::withdraw(const SavingsAccount& pSavingsAccount)
{
    int userNum;
    const double getTempSavingBalance = pSavingsAccount.getSavingsBalance();
    double setTempSavingBalance = 0;

    std::cout << "Enter Withdrawal Amount: ";
    std::cin >> userNum;
    checkingBalance -= userNum;
    if (checkingBalance < -overdraftLimit)
    {
        int counter = 0;

        for (int i = checkingBalance; i < checkingBalanceMinimumAfterOverDraft ; i++) { counter += 1; }
        setTempSavingBalance = getTempSavingBalance - (counter + overdraftFee);
        checkingBalance += (counter + overdraftFee);
        std::cout << "Overdraft + Fee: $" << (counter + overdraftFee) << "\n";
    }
    else
    {
        setTempSavingBalance = getTempSavingBalance;
    }
    std::cout << "Amount after withdrawal: " << checkingBalance << "\n";

    return setTempSavingBalance;
}

void CheckingAccount::transfer()
{

}