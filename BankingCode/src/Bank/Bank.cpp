
#include <iostream>
#include <random>

#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
/*
 * STATIC
 */
int Bank::randomAccountNumberGenerator() {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1000000, 2000000);

    return dis(gen);
}

int Bank::randomDepositNumberGenerator()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 5000);

    return dis(gen);
}

//--------------------------------------------------------------

void Bank::display(const SavingsAccount& pUserSavings, const CheckingAccount& pUserChecking) const
{
    std::cout << "Account Number: " << accountNumber << "\n-----------------------------------\n";
    std::cout << "Savings Account Number: " << savingsAccountNumber << "\n";
    std::cout << "Current Savings Balance: $" << pUserSavings.getSavingsBalance()
    << "\n-----------------------------------\n";
    std::cout << "Checking Account Number: " << checkingAccountNumber << "\n";
    std::cout << "Current Checking Balance: $" << pUserChecking.getCheckingBalance() << "\n";
}

Bank::~Bank() = default;
