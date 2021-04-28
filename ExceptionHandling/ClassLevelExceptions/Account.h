#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include "I_Printable.h"

using std::string;

class Account: public I_Printable {
protected:
    string name;
    double balance;

public:
    Account(string name, double balance);
    virtual ~Account() = default;
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    double get_balance() const { return balance; };
    string get_name() const { return name; };
};
#endif