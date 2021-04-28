#include "Account_Util.h"

// Displays Account objects in a  vector of Account objects 
void display(const vector<Account *> &accounts) {
    cout << "\n=== Accounts ==========================================" << endl;
    for (const auto &ptr: accounts) 
        cout << *ptr << endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(vector<Account *> &accounts, double amount) {
    cout << "\n=== Depositing to Accounts =================================" << endl;
    for (const auto &ptr: accounts)  {
        if (ptr->deposit(amount)) 
            cout << "Deposited " << amount << " to " << *ptr << endl;
        else
            cout << "Failed Deposit of " << amount << " to " << *ptr << endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(vector<Account *> &accounts, double amount) {
    cout << "\n=== Withdrawing from Accounts ==============================" << endl;
    for (const auto &ptr: accounts)  {
        if (ptr->withdraw(amount)) 
            cout << "Withdrew " << amount << " from " << *ptr << endl;
        else
            cout << "Failed Withdrawal of " << amount << " from " << *ptr << endl;
    } 
}