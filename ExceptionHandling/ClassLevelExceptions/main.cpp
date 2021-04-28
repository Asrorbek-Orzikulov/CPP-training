#include <iostream>
#include <memory>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "IllegalBalanceException.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::unique_ptr;
using std::make_unique;

int main() {
    try {
        unique_ptr<Account> asrors_account = make_unique<Savings_Account>("Asror", -100);
        cout << *asrors_account << endl;
    }
    catch (IllegalBalanceException &excp) {
        cerr << "Negative balance: could not create an account" << endl;
    }
    cout << "The program terminated successfully" << endl;
    return 0;
}
