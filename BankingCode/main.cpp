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

    std::fstream vectorFile("bankDataBefore.txt" , std::ios::trunc | std::ios::in | std::ios::out);
    if (vectorFile.is_open())
    {
        for (int i = 0; i< banks.size(); i++)
        {
            vectorFile << "ACC #:\t\t" << banks[i].getAccountNumber() << std::endl
                       << "SAVING #:\t$" <<banks[i].getSavingsAccount().getBalance() << std::endl
                       << "CHECKING #:\t$" <<banks[i].getCheckingAccount().getBalance() << std::endl
            << std::endl;
        }
    }
    else
    {
        cout << "Failed to open the bankDataBefore.txt file" << std::endl;
        return 1;
    }
    vectorFile.close();

    return 0;
}
