#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << "Enter two numbers separated by a space: ";
    int num1 {}, num2 {};
    cin >> num1 >> num2;
    if (num1 != num2) {
        cout << "A larger one is " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "A smaller one is " << ((num1 < num2) ? num1 : num2) << endl;
    } else
        cout << "The two numbers are equal." << endl;
    cout << "=================================" << endl;
    
    cout << "Enter a number: ";
    int num3 {};
    cin >> num3;
    cout << num3 << " is " << ((num3 % 2 == 0) ? "even." : "odd.") << endl;
	return 0;
}
