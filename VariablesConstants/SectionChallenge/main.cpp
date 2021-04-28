#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    // Asrorbek's carpet cleaning service
    // Charges $30 per carpet
    // VAT is 6%
    // Estimates are valid for 30 days
    
    const float price_small {25}; // can have cents
    const float price_large {32};
    const float tax_rate {0.05};
    const short estimate_validity {15}; // in days

    cout << "\nHello. Welcome to Asrorbek's carpet cleaning service!" << endl;
    cout << "How many small carpets do you want us to clean? ";
    short num_carpets_small {0};
    cin >> num_carpets_small;
    cout << "How many large carpets do you want us to clean? ";
    short num_carpets_large {0};
    cin >> num_carpets_large;
    
    cout << "Number of small carpets: " << num_carpets_small << endl;
    cout << "Number of large carpets: " << num_carpets_large << endl;
    cout << "Price per small carpet: $" << price_small << endl;
    cout << "Price per large carpet: $" << price_large << endl;
    short total_cleaning_cost {0};
    total_cleaning_cost = price_small * num_carpets_small + price_large * num_carpets_large;
    cout << "Cost of cleaning: $" << total_cleaning_cost << endl;
    cout << "Tax: $" << total_cleaning_cost * tax_rate << endl;
    cout << "Total estimate: $" << total_cleaning_cost * (1 + tax_rate) << endl;
    cout << "Estimates are valid for "<< estimate_validity << " days." << endl;

	return 0;
}
