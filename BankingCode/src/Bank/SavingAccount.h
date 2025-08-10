//
// Created by Caleb Byers on 8/10/2025.
//
#ifndef BANKING_SYSTEM_SAVINGACCOUNT_H
#define BANKING_SYSTEM_SAVINGACCOUNT_H

#include "Bank.h"

class SavingsAccount final : public Bank {
public:
    explicit SavingsAccount(const Bank& pBank)
    : userBank(pBank),
      savingsAccountNumber(pBank.getAccountNumber()),
      savingsBalance(pBank.getBalance())
    {}

    void setSavingsBalance(const double pBalance) { savingsBalance = pBalance; }
    double getSavingsBalance()              const { return savingsBalance; }

    void deposit() override;
    void transfer();

    void addInterestAPY();
    void display() const;

private:
    Bank userBank;
    int savingsAccountNumber;
    double savingsBalance;

    const double APY_rate = 0.042;
};

#endif //BANKING_SYSTEM_SAVINGACCOUNT_H