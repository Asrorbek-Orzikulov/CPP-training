#include "Trust_Account.h"

Trust_Account::Trust_Account(string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}, withdrawals_made {0} {
}

bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if (withdrawals_made < 3 && amount < max_withdraw_percent * balance) {
        ++withdrawals_made;
        return Savings_Account::withdraw(amount);
    } else
        return false;
}

void Trust_Account::print(ostream &os) const {
    os << "[Trust_Account: " << name << endl;
    os << "Balance: $" << balance << endl;
    os << "Interest rate: " << int_rate << "%" << endl;
    os << "Bonus threshold: $" << bonus_threshold << "]" << endl;
}

bool Trust_Account::operator+=(double amount) {
    return deposit(amount);
}

bool Trust_Account::operator-=(double amount) {
    return withdraw(amount);
}