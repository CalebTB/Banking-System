#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"

#include <iostream>
using std::cout;

int main(int argc, char* argv[])
{
    int menuOption = 1;
    const Bank bank;
    SavingsAccount savings_account(bank);
    CheckingAccount checking_account(bank);

    cout << "1. Bank Display()" << "\n";
    cout << "2. Savings Deposit()" << "\n";
    cout << "3. Savings Display()" << "\n";
    cout << "4. Add APY to Savings" << "\n";
    cout << "5. Checking Deposit()" << "\n";
    cout << "6. Checking Withdrawal" << "\n";
    cout << "0. Exit" << "\n";

    while (menuOption != 0) {
        std::cin >> menuOption;
        switch (menuOption) {
            case 1:
                bank.display(savings_account, checking_account);
                break;
            case 2:
                savings_account.deposit();
                break;
            case 3:
                savings_account.display();
                break;
            case 4:
                savings_account.addInterestAPY();
                break;
            case 5:
                checking_account.deposit();
                break;
            case 6:
                savings_account.setSavingsBalance(checking_account.withdraw(savings_account));
                break;
            case 0:
                cout << "Good Bye!\n";
                menuOption = 0;
                break;
            default: ;
        }
    }

    return 0;
}
