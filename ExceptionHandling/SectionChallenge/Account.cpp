#include "Account.h"
#include "IllegalBalanceException.h"
#include "InsufficientBalanceException.hpp"

Account::Account(string name, double balance)
    : name{name}, balance{balance} {
        if (balance < 0)
            throw IllegalBalanceException {};
}

bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount < 0)
        throw InsufficientBalanceException {};
    balance -= amount;
    return true;
}