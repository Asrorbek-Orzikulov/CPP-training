// Section 16
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using std::boolalpha;
using std::fixed;

int main() {
    cout.precision(1);
    cout << fixed;
    cout << boolalpha;

    // Account pointers
    Account *p1 = new Checking_Account {"Larry", 1000};
    Account *p2 = new Savings_Account {"Moe", 2000, 15};
    Account *p3 = new Trust_Account {"Curly", 5000, 6};

    // Vector operations
    cout << endl;
    vector<Account *> accounts;
    accounts.push_back(p1);
    accounts.push_back(p2);
    accounts.push_back(p3);
    for (auto const &ptr: accounts)
        cout << *ptr << endl;

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 1000);

    // Checking account
    Checking_Account asror {};
    asror.deposit(1400);
    asror.withdraw(1000);
    cout << asror << endl;
    
    // Trust account
    Trust_Account abror {"Abror", 1300, 3};
    cout << abror << endl;
    abror += 3000;
    cout << abror << endl;

    abror += 5000;
    cout << abror << endl;

    cout << (abror -= 5000) << endl;;
    cout << abror << endl;

    abror -= 1000;
    cout << abror << endl;
    abror -= 1000;
    cout << abror << endl;
    abror -= 1000;
    cout << abror << endl;
    abror -= 1000;
    cout << abror << endl;
    cout << (abror -= 1000) << endl;;
    cout << abror << endl;

    return 0;
}

