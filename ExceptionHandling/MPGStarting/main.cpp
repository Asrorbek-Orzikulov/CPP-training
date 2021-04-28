#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main() {
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;
    
    if (gallons == 0)
        cout << "Sorry, you can't divide by zero" << endl;
    else {
        miles_per_gallon = static_cast<double>(miles) / gallons;
        cout << "The result is " << miles_per_gallon << endl;
    }
    cout << "Bye!" << endl;
    
    try {
        if (gallons == 0)
            throw 0;
        miles_per_gallon = static_cast<double>(miles) / gallons;
        cout << "The result is " << miles_per_gallon << endl;
    }
    catch (int &excp) { // Best practice is to pass by reference
        cerr << "Sorry, you can't divide by zero" << endl;  // not cout!
    }
    cout << "Bye!" << endl;

    return 0;
}
