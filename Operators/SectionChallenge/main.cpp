#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};
    
    cout << "Enter the number of cents to change: ";
    int cents {};
    cin >> cents;
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    dollars = cents / dollar_value;
    cents %= dollar_value;
    quarters = cents / quarter_value;
    cents %= quarter_value;
    dimes = cents / dime_value;
    cents %= dime_value;
    nickels = cents / nickel_value;
    cents %= nickel_value;
    pennies = cents / penny_value;
    cents %= penny_value;
    
    cout << "You can provide this change as follows: ";
    cout << "\ndollars: " << dollars;
    cout << "\nquarters: " << quarters;
    cout << "\ndimes: " << dimes;
    cout << "\nnickels: " << nickels;
    cout << "\npennies: " << pennies << endl;
    cout << "============================\n";
    
    cout << "Enter the number of cents to change: ";
    cin >> cents;
    dollars = cents / dollar_value;
    cents -= dollar_value * dollars;
    quarters = cents / quarter_value;
    cents -= quarter_value * quarters;
    dimes = cents / dime_value;
    cents -= dime_value * dimes;
    nickels = cents / nickel_value;
    cents -= nickel_value * nickels;
    pennies = cents / penny_value;
    cents -= penny_value * pennies;
    
    cout << "You can provide this change as follows: ";
    cout << "\ndollars: " << dollars;
    cout << "\nquarters: " << quarters;
    cout << "\ndimes: " << dimes;
    cout << "\nnickels: " << nickels;
    cout << "\npennies: " << pennies << endl;
    
	return 0;
}
