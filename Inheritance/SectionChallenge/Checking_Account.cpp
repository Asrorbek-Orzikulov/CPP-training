#include "Checking_Account.h"

Checking_Account::Checking_Account(string name, double balance)
    : Account {name, balance} {
}

bool Checking_Account::withdraw(double amount) {
    amount += penalty;
    return Account::withdraw(amount);
}

ostream &operator<<(ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return os;
}
