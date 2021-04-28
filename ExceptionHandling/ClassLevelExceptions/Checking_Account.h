#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <iostream>
#include "Account.h"

using std::ostream;
using std::string;

class Checking_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double penalty = 1.50;

public:
    Checking_Account(string name=def_name, double balance=def_balance);
    virtual ~Checking_Account() = default;
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(ostream &os) const override;
};

#endif // _CHECKING_ACCOUNT_H_