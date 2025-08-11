#include <iostream>

#include "Bank.h"

#include "Utilities.h"

Bank::Bank()
    : accountNumber(0), savingsAccountNumber(0), checkingAccountNumber(0)
{
    accountNumber         = Utilities::randomDepositNumberGenerator();
    savingsAccountNumber  = accountNumber + 1;
    checkingAccountNumber = accountNumber + 2;
}


void Bank::display()
{
    std::cout << "ACCOUNT #:\t\t|" << accountNumber << std::endl;
    std::cout << "SAVINGS ACCOUNT #:\t|" << savingsAccountNumber << std::endl;
    std::cout << "CHECKING ACCOUNT #:\t|" << checkingAccountNumber << std::endl;
    savingsAccount.display();
    checkingAccount.display();
}
