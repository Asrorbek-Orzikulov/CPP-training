#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <iostream>
#include <vector>
#include "Account.h"

using std::vector;
using std::cout;
using std::endl;

// Utility helper functions for Account *
void display(const vector<Account *> &accounts);
void deposit(vector<Account *> &accounts, double amount);
void withdraw(vector<Account *> &accounts, double amount);

#endif