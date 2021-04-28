#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int total_amount {100}, total_number {8};
    double average {0.0}, average1 {0.0}, average2 {0.0}, average3 {0.0}; 
    
    average = total_amount / total_number;
    cout << "Displays 12: " << average << endl;
    
    average1 = static_cast<double> (total_amount) / total_number;  // Use this version!
    cout << "Displays 12.5: " << average1 << endl;

    average2 = double(total_amount) / total_number;   // Old-style!!!
    cout << "Displays 12.5: " << average2 << endl;

    average3 = (double)total_amount / total_number;   // Old-style!!!
    cout << "Displays 12.5: " << average3 << endl;

    // Calculating average
    cout << "Enter three integers: ";
    int num1 {}, num2 {}, num3 {};
    cin >> num1 >> num2 >> num3;
    double mean {0.0};
    mean = static_cast<double>(num1 + num2 + num3) / 3;  // static_cast double checks the input!
    cout << "The average number is: " << mean << endl;

	return 0;
}
