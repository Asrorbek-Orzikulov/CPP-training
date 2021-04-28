#include "Trust_Account.h"

ostream &operator<<(ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance
       << ", " << account.int_rate << "%]";
    return os;
}

Trust_Account::Trust_Account(string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}, withdrawals_made {0} {
}

bool Trust_Account::deposit(double amount) {
    if (Savings_Account::deposit(amount)) {
        if (amount >= bonus_threshold)
            balance += bonus;
        return true;
    } else
        return false; 
}

bool Trust_Account::withdraw(double amount) {
    if (withdrawals_made < 3 && amount < max_withdraw_percent * balance) {
        ++withdrawals_made;
        return Savings_Account::withdraw(amount);
    } else
        return false;
}

bool Trust_Account::operator+=(double amount) {
    return deposit(amount);
}

bool Trust_Account::operator-=(double amount) {
    return withdraw(amount);
}