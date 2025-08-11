#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"

#include <iostream>
using std::cout;

int main(int argc, char *argv[])
{
    int menuOption = 1;
    Bank bank;

    cout << "Savings before deposit: $"
          << bank.getSavingsAccount().getBalance() << "\n";

    bank.getSavingsAccount().deposit();

    cout << "Savings after deposit: $"
              << bank.getSavingsAccount().getBalance() << "\n";

    /*cout << "1. Bank Display()" << "\n";
    cout << "2. Savings Display()" << "\n";
    cout << "3. Savings Deposit()" << "\n";
    cout << "4. Checking Display" << "\n";
    cout << "5. Checking Deposit()" << "\n";
    cout << "6. Checking Withdrawal" << "\n";
    cout << "0. Exit" << "\n";

    while (menuOption != 0) {
        std::cin >> menuOption;
        switch (menuOption) {
            case 1:
                bank.display();
                break;
            case 2:
                bank.getSavingsAccount().display();
                break;
            case 3:
                bank.getSavingsAccount().deposit();
                break;
            case 4:
                bank.getCheckingAccount().display();
                break;
            case 5:
                bank.getCheckingAccount().deposit();
                break;
            case 6:
                bank.getCheckingAccount().withdraw();
                break;
            case 0:
                cout << "Good Bye!\n";
                menuOption = 0;
                break;
            default: ;
        }
    }*/

    return 0;
}
