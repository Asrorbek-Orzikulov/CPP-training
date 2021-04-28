#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

double calculate_average(int sum, int count) {
    if (count == 0)
        throw 0;
    if (sum < 0 || count < 0)
        throw string {"Negative values are not allowed!"};
    return static_cast<double>(sum) / count;
}

int main() {
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    try {
        miles_per_gallon = calculate_average(miles, gallons);
        cout << "The result is " << miles_per_gallon << endl;
    }
    catch (int &excp) { // Best practice is to pass by reference
        cerr << "Sorry, you can't divide by zero" << endl;  // not cout!
    }
    catch (string &excp) {
        cerr << excp << endl;
    }
    catch(...) {
        cerr << "Handling unknown errors!" << endl;
    }
    cout << "Bye!" << endl;

    return 0;
}
