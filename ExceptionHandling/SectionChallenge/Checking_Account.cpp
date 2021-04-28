#include "Checking_Account.h"

using std::endl;

Checking_Account::Checking_Account(string name, double balance)
    : Account {name, balance} {
}

bool Checking_Account::deposit(double amount) {
    return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount) {
    amount += penalty;
    return Account::withdraw(amount);
}

void Checking_Account::print(ostream &os) const {
    os << "[Checking_Account: " << name << endl;
    os << "Balance: $" << balance << endl;
    os << "Penalty: $" << penalty << "]" << endl;
}
