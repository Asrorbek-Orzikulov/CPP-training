#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include <iostream>
#include "Savings_Account.h"

using std::ostream;
using std::string;

class Trust_Account: public Savings_Account {
    friend ostream &operator<<(ostream &os, const Trust_Account &account);

private:
    static constexpr const char def_name[] = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus = 50.0;
    static constexpr double bonus_threshold = 5000.00;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdraw_percent = 0.2;

protected:
    int withdrawals_made;

public:
    Trust_Account(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
    bool operator+=(double amount);
    bool operator-=(double amount);
};

#endif // _TRUST_ACCOUNT_H_