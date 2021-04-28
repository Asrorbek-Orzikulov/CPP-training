 #ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include <iostream>
#include "Savings_Account.h"

using std::ostream;
using std::string;
using std::endl;

class Trust_Account: public Savings_Account {
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
    Trust_Account(string name=def_name, double balance=def_balance, double int_rate=def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(ostream &os) const override;
    virtual ~Trust_Account() = default;
    bool operator+=(double amount);
    bool operator-=(double amount);
};

#endif // _TRUST_ACCOUNT_H_