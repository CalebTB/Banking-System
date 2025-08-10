//
// Created by Caleb Byers on 8/10/2025.
//
#ifndef BANKING_SYSTEM_CHECKINGACCOUNT_H
#define BANKING_SYSTEM_CHECKINGACCOUNT_H

#include "Bank.h"

class CheckingAccount final : public Bank {
public:
    explicit CheckingAccount(const Bank& pBank)
    : userBank(pBank),
      checkingAccountNumber(pBank.getCheckingAccountNumber()),
      checkingBalance(0.0)
    {}
    void setCheckingBalance(const double pCheckingBalance) { checkingBalance = pCheckingBalance; }
    double getCheckingBalance() const{ return checkingBalance; }

    void deposit() override;
    double withdraw(const SavingsAccount &pSavingsAccount);
    void transfer();

private:
    Bank userBank;
    int checkingAccountNumber;
    double checkingBalance;

    const int overdraftLimit = 100;
    const int overdraftFee = 25;
    const int checkingBalanceMinimumAfterOverDraft = 25;
};


#endif //BANKING_SYSTEM_CHECKINGACCOUNT_H