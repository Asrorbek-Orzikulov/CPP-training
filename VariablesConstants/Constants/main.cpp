#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    const double pi {3.1415926};
    cout << "The constant is " << pi << endl;
    const int month_in_year {12};
    cout << "A year has " << month_in_year
         << " months." << endl;
    
    // Asrorbek's carpet cleaning service
    // Charges $30 per carpet
    // VAT is 6%
    // Estimates are valid for 30 days
    
    const float price {32}; // can have cents
    const float tax_rate {0.05};
    const short estimate_validity {15}; // in days

    cout << "\nHello. Welcome to Asrorbek's carpet cleaning service!" << endl;
    cout << "How many carpets do you want us to clean? ";
    short num_carpets {0};
    cin >> num_carpets;
    cout << "Number of carpets: " << num_carpets << endl;
    cout << "Price per carpet: $" << price << endl;
    cout << "Cost of cleaning: $" << price * num_carpets << endl;
    cout << "Tax: $" << price * num_carpets * tax_rate << endl;
    cout << "Total estimate: $" << price * num_carpets * (1 + tax_rate) << endl;
    cout << "Estimates are valid for "<< estimate_validity << " days." << endl;

	return 0;
}
