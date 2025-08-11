#pragma once

#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"

/*
 * Banks sole purpose is to display all the given information of the saving accounts and checking accounts
 * while also starting the accounts and setting them up.
 */
class Bank
{
private:
    SavingsAccount savingsAccount;
    CheckingAccount checkingAccount;

    int accountNumber;
    int savingsAccountNumber;
    int checkingAccountNumber;

    const double startingBalance = 100.0;

public:
    Bank();
    SavingsAccount& getSavingsAccount() { return savingsAccount; }
    CheckingAccount& getCheckingAccount() { return checkingAccount; }

    int getAccountNumber() const { return accountNumber; }
    int getSavingsAccountNumber() const { return savingsAccountNumber; }
    int getCheckingAccountNumber() const { return checkingAccountNumber; }

    void display();
};
