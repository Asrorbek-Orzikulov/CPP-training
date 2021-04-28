#include "Savings_Account.h"
#include <iostream>

using std::ostream;
using std::endl;

Savings_Account::Savings_Account(string name, double balance, double int_rate)
    : Account {name, balance}, int_rate{int_rate} {
}

bool Savings_Account::deposit(double amount) {
    amount += amount * int_rate/100;
    return Account::deposit(amount);
}

bool Savings_Account::withdraw(double amount) {
    return Account::withdraw(amount);
}

void Savings_Account::print(ostream &os) const {
    os << "[Savings_Account: " << name << endl;
    os << "Balance: $" << balance << endl;
    os << "Interest rate: " << int_rate << "%]" << endl;
}