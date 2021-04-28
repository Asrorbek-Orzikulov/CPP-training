#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;
using std::noboolalpha;

int main(){
    
    // Assignment operator
    int num1 {33}, num2 {15};
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    num1 = num2 = 100;
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    cout << "============================\n\n";
    
    // Increment/decrement operator
    int counter {10};
    int result {0};
    
//    // Example 1 - general
//    cout << "Counter: " << counter << endl;
//    counter++;
//    cout << "Counter: " << counter << endl;
//    ++counter;
//    cout << "Counter: " << counter << endl;
    
//    // Example 2 - preincrement
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
//    result = ++counter;         // first increment counter, then assign to result
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
//    // Example 3 - postincrement
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
//    result = counter++;        // first assign to result, then increment counter
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
    // Example 4 - predecrement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    result = --counter + 5;      // first decrement counter, then assign to result
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    cout << "============================\n\n";

    // Comparison operators
    cout << "Without boolalpha: " << (100 != 200) << endl;
    cout << boolalpha;
    cout << "With boolalpha: " << (100 == 200) << endl;
    cout << noboolalpha;
    cout << "With noboolalpha: " << (100 == 50 + 50) << endl;
    cout << "============================\n\n";
    
    // Be careful!!! Enter 12.0 and 11.9999999999999999
    double num3 {}, num4{};
    cout << num3 << " and " << num4 << endl;
    cout << "Enter two numbers to be compared: ";
    cin >> num3 >> num4;
    cout << boolalpha;
    cout << "The equality of these two numbers is "
         << (num3 == num4) << "!\n";
    cout << "============================\n\n";

    /*************************************************** 
     * Logical operators:
     * Not has the highest precedence;
     * And has the second highest precedence;
     * Or has the lowest precedence;
     * You can either use (not, and, or) or (!, &&, ||).
     **************************************************/
    cout << "Enter a number between 10 and 20: ";
    int num5 {};
    cin >> num5;
    cout << "The number is between 10 and 20: " << (num5 > 10 && num5 < 20) << endl;
    cout << "============================\n\n";
    
    // Compound operators 
    // lhs op= rhs ==> lhs = lhs op (rhs)
    int num6 {}, num7 {}, num8 {};
    num6 = 5;
    num7 = 2;
    num8 = 3;
    cout << "a is " << num6 << endl;
    cout << "b is " << num7 << endl;
    cout << "c is " << num8 << endl;
    num6 *= num7 + num8;   // The same as num6 = num6 * (num7 + num8)
    cout << "a *= b + c is " << num6 << endl; 
    cout << "============================\n\n";

	return 0;
}
