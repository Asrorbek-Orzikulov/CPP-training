#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

class DivideByZeroException {
};

class NegativeValueException {
public:
    NegativeValueException() = default; // The same as not providing any constructor
};

double calculate_average(int sum, int count) {
    if (count == 0)
        throw DivideByZeroException {};
    if (sum < 0 || count < 0)
        throw NegativeValueException {};
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
    catch (DivideByZeroException &excp) { // Best practice is to pass by reference
        cerr << "Sorry, you can't divide by zero" << endl;  // not cout!
    }
    catch (NegativeValueException &excp) {
        cerr << "Negative values are not allowed!" << endl;
    }
    catch(...) {
        cerr << "Handling unknown errors!" << endl;
    }
    cout << "Bye!" << endl;

    return 0;
}
