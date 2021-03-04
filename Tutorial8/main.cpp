#include <iostream>
#include <Complex.h>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::boolalpha;

int main() {
    cout << "\n=========== Test insertion operator ===========" << endl;
    Complex num1 {1, -2};
    cout << num1 << endl;
    
    Complex num2 {3, 6};
    cout << num2 << endl;

    cout << "\n=========== Test sum/subtraction ===========" << endl;
    num1.changeNum(-4, 7);
    num2.changeNum(5, -10);
    cout << num1 + num2 << endl;
    num1 += num2;
    cout << num1 << endl;

    cout << endl;
    num1.changeNum(2, 12);
    num2.changeNum(3, -15);
    cout << num1 - num2 << endl;
    num1 -= num2;
    cout << num1 << endl;

    cout << "\n=========== Test product ===========" << endl;
    num1.changeNum(1, -5);
    num2.changeNum(-9, 2);
    cout << num1 * num2 << endl;
    num1 *= num2;
    cout << num1 << endl;

    cout << endl;
    num1.changeNum(0, 7);
    num2.changeNum(-5, 2);
    cout << num1 * num2 << endl;
    num1 *= num2;
    cout << num1 << endl;

    cout << endl;
    num1.changeNum(1, -8);
    num2.changeNum(1, 8);
    cout << num1 * num2 << endl;
    num1 *= num2;
    cout << num1 << endl;

    cout << "\n=========== Test division ===========" << endl;
    num1.changeNum(3, -1);
    num2.changeNum(2, 7);
    cout << num1 / num2 << endl;
    num1 /= num2;
    cout << num1 << endl;

    cout << endl;
    num1.changeNum(6, -9);
    num2.changeNum(0, 2);
    cout << num1 / num2 << endl;
    num1 /= num2;
    cout << num1 << endl;

    cout << "\n=========== Test equality ===========" << endl;
    cout << boolalpha;
    cout << "Returns false: " << (num1 == num2) << endl;
    cout << "Returns true: " << (num1 != num2) << endl;
    num1.changeNum(0, 2);
    cout << "Returns true: " << (num1 == num2) << endl;
    cout << "Returns false: " << (num1 != num2) << endl;

    return 0;
}
