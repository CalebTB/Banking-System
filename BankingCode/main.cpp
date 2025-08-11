#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"

#include <fstream>
#include <iostream>
#include <vector>

using std::cout;

int main(int argc, char *argv[])
{
    std::vector<Bank> banks;
    banks.reserve(10);

    for (int i = 0; i < 10; ++i)
    {
        banks.push_back(Bank());
    }

    const std::string afterFileName = "E:/Coding Projects/Banking-System/BankingCode/src/BankDataAfter.txt";
    const std::string beforeFileName = "E:/Coding Projects/Banking-System/BankingCode/src/BankDataBefore.txt";

    std::fstream beforeFile(beforeFileName , std::ios::trunc | std::ios::in | std::ios::out);
    if (beforeFile.is_open())
    {
        for (auto & bank : banks)
        {
            beforeFile << "ACC #:\t\t" << bank.getAccountNumber() << std::endl
                       << "SAVING #:\t$" <<bank.getSavingsAccount().getBalance() << std::endl
                       << "CHECKING #:\t$" <<bank.getCheckingAccount().getBalance() << std::endl
            << std::endl;
        }
    }
    else
    {
        cout << "Failed to open the bankDataBefore.txt file" << std::endl;
        return 1;
    }
    beforeFile.close();

    std::fstream afterFile(afterFileName , std::ios::trunc | std::ios::in | std::ios::out);
    for (auto & bank : banks)
    {
        bank.getSavingsAccount().deposit();
        bank.getCheckingAccount().deposit();
    }
    if (afterFile.is_open())
    {
        for (auto & bank : banks)
        {
            afterFile << "ACC #:\t\t" << bank.getAccountNumber() << std::endl
                      << "SAVING #:\t$" <<bank.getSavingsAccount().getBalance() << std::endl
                      << "CHECKING #:\t$" <<bank.getCheckingAccount().getBalance() << std::endl
            << std::endl;
        }
    }
    else
    {
        cout << "Failed to open the bankDataBefore.txt file" << std::endl;
        return 1;
    }
    afterFile.close();

    return 0;
}
