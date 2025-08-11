//
// Created by Caleb Byers on 8/10/2025.
//
#ifndef BANKING_SYSTEM_CHECKINGACCOUNT_H
#define BANKING_SYSTEM_CHECKINGACCOUNT_H

#include "IAccount.h"

class CheckingAccount final : public IAccount
{
private:
    double balance = 0.0;

    const int overdraftLimit                       = 100;
    const int overdraftFee                         = 25;
    const int checkingBalanceMinimumAfterOverDraft = 25;

public:
    CheckingAccount();

    void display() override;
    void deposit() override;
    void withdraw() override;
    double getBalance() override { return balance; }

    double overdraftAmountOutOfSavings = 0.0;

    ~CheckingAccount() override = default;
};


#endif //BANKING_SYSTEM_CHECKINGACCOUNT_H
