//
// Created by Caleb Byers on 8/10/2025.
//
#ifndef BANKING_SYSTEM_SAVINGACCOUNT_H
#define BANKING_SYSTEM_SAVINGACCOUNT_H

#include "IAccount.h"

class SavingsAccount final : public IAccount
{
private:
    double balance = 0.0;

    const double APY_rate = 0.042;

public:
    SavingsAccount();

    void display() override;
    void deposit() override;
    void withdraw() override;
    double getBalance() override { return balance; }

    void addInterestAPY();

    ~SavingsAccount() override = default;
};

#endif //BANKING_SYSTEM_SAVINGACCOUNT_H
