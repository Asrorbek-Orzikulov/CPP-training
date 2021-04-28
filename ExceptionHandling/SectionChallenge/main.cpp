#include <iostream>
#include <memory>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "IllegalBalanceException.h"
#include "InsufficientBalanceException.hpp"
#include "IncorrectWithdrawalException.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::unique_ptr;
using std::make_unique;

int main() {
    unique_ptr<Account> asrors_account;
    unique_ptr<Account> abrors_account;
    try {
        asrors_account = make_unique<Savings_Account>("Asror", 1000);
        cout << *asrors_account << endl;
    }
    catch (IllegalBalanceException &excp) {
        cerr << excp.what() << endl;
    }

    try {
        abrors_account = make_unique<Trust_Account>("Abror", 2000);
        cout << *abrors_account << endl;
        abrors_account->withdraw(300);
        cout << *abrors_account << endl;
        abrors_account->withdraw(300);
        cout << *abrors_account << endl;

        asrors_account->withdraw(1100);
        cout << *asrors_account << endl;
    }
    catch (InsufficientBalanceException &excp) {
        cerr << excp.what() << endl;
    }
    catch (IllegalBalanceException &excp) {
        cerr << excp.what() << endl;
    }
    catch (IncorrectWithdrawalException &excp) {
        cerr << excp.what() << endl;
    }
    cout << "The program terminated successfully" << endl;
    return 0;
}
