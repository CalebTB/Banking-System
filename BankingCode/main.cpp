#include "Bank.h"

int main(int argc, char* argv[])
{
    Bank bank;
    bank.deposit();
    bank.display();
    bank.withdraw();
    bank.display();
    return 0;
}
