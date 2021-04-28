#include <iostream>

using std::cin;  // using only what I need
using std::cout;
using std::endl;

int main(){
//    cout << "Hello world!"; // continuation goes after world!
    
//    cout << "Hello ";
//    cout << "world!"; // 2 words on the same line
//    
//    cout << "Hello world!" << endl;
//    cout << "Hello " << "world!" << endl;
//    cout << "Hello " << "world!\n";
//    cout << "Hello\nOut\nThere!\n";
    
//    int num1;
//    int num2;
//    
//    cout << "Enter an integer: ";
//    cin >> num1;
//    cout << "You entered " << num1 << endl;
    
    /* The following code can be passed two numbers
     * with a space between them. If this is the case,
     * the code does not wait for me to press enter.
     * It will get num2 directly from the buffer and 
     * proceed with the execution.
     */

//    cout << "Enter the first integer: ";
//    cin >> num1;
//    cout << "Enter the second integer: ";
//    cin >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;

//    cout << "Enter 2 integers separated with a space: ";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;

//    double num3;
//    cout << "Enter a double: ";
//    cin >> num3;
//    cout << "You entered " << num3 << endl;

    // potentially problematic piece of code!!! 
    int num1;
    cout << "Enter an integer: ";
    cin >> num1;    
    double num3;
    cout << "Enter a double: ";
    cin >> num3;
    cout << "Your integer is " << num1 << endl;
    cout << "Your double is " << num3 << endl;

	return 0;
}