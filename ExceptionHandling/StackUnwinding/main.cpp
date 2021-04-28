#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void func_c() {
    cout << "Starting function c" << endl;
    throw 0;
    cout << "Ending function c" << endl;
}

void func_b() {
    cout << "Starting function b" << endl;
    func_c();
    cout << "Ending function b" << endl;
}

void func_a() {
    cout << "Starting function a" << endl;
    try {
        func_b();
    }
    catch (int &excp) {
        cout << "Catching the exception" << endl;
    }
    cout << "Ending function a" << endl;
}

int main() {
    cout << "Starting main" << endl;
    func_a();
    cout << "Ending main" << endl;
    return 0;
}
