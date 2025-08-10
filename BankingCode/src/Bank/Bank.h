#pragma once

#include "Bank.h"

class SavingsAccount;
class CheckingAccount;
/*
 * Banks sole purpose is to display all the given information of the saving accounts and checking accounts
 * while also starting the accounts and setting them up.
 */
class Bank {
public:
    Bank()
    : accountNumber(0),
      savingsAccountNumber(0),
      checkingAccountNumber(0)
    {
        accountNumber = randomAccountNumberGenerator();
        savingsAccountNumber = accountNumber + 1;
        checkingAccountNumber = accountNumber + 2;
    }
    static int randomAccountNumberGenerator();
    static int randomDepositNumberGenerator();

    int getAccountNumber()         const { return accountNumber; }
    int getSavingsAccountNumber()  const { return savingsAccountNumber; }
    int getCheckingAccountNumber() const { return checkingAccountNumber; }
    double getBalance()            const { return startingBalance; }

    virtual void deposit()  {/*no implementation*/};
    virtual void withdraw() {/*no implementation*/};
    void display(const SavingsAccount& pUserSavings, const CheckingAccount& pUserChecking) const;

    virtual ~Bank(); //not implemented

private:
    int accountNumber;
    int savingsAccountNumber;
    int checkingAccountNumber;
    const double startingBalance = 100.0;
};
