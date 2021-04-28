#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

using std::string;

class Account {
private:
    // attributes
    string name {};
    double balance {};

public:
    // methods
    // declared inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}

    // methods will be implemented outside the class declaration
    void set_name(string n);
    string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _ACCOUNT_H_
