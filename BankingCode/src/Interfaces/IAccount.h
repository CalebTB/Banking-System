//
// Created by Caleb Byers on 8/10/2025.
//

#ifndef BANKING_SYSTEM_IACCOUNT_H
#define BANKING_SYSTEM_IACCOUNT_H

/**
 * @class Interface for all accounts
 */
class IAccount
{
public:
    virtual void display() = 0 ;
    virtual void deposit() = 0;
    virtual void withdraw() = 0;
    virtual double getBalance() = 0;


    virtual ~IAccount() = default;
};

#endif //BANKING_SYSTEM_IACCOUNT_H
