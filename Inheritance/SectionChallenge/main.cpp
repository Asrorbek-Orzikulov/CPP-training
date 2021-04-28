// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);

    // Savings 
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

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

    abror -= 5000;
    cout << abror << endl;

    abror -= 1000;
    cout << abror << endl;
    abror -= 1000;
    cout << abror << endl;
    abror -= 1000;
    cout << abror << endl;
    abror -= 1000;
    cout << abror << endl;
    abror -= 1000;
    cout << abror << endl;

    return 0;
}

