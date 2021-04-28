#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Base {
private:
    int value;
public:
    Base() : value{0} {
       cout << "Base no-args constructor" << endl;
    }

    Base(int x)
        : value{x} {
            cout << "Base (int) overloaded constructor" << endl;
    }

    Base(const Base &other)  // Copy constructor
        : value {other.value} {
            cout << "Base copy constructor" << endl;
    }
    
    Base &operator=(const Base &rhs) { // Copy assignment
        cout << "Base copy assignment" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }

    ~Base(){ cout << "Base destructor" << endl; }
};

class Derived : public Base {
    using Base::Base;
private:
    int doubled_value;
public:
    Derived()
        : Base {}, doubled_value {0} {
            cout << "Derived no-args constructor " << endl;
    }

    Derived(int x)
        : Base {x}, doubled_value {x*2} {
            cout << "Derived (int) overloaded constructor" << endl;
    }

    Derived(const Derived &other)
        : Base {other}, doubled_value {other.doubled_value} {
            cout << "Derived copy constructor" << endl;
    }

    Derived &operator=(const Derived &rhs) {
        cout << "Derived copy assignment" << endl;
        if (this == &rhs)
            return *this;
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }

    ~Derived() {
        cout << "Derived destructor " << endl;
    }
};

int main() {
    Base b1 {150};
    Base b2 {b1};
    b1 = b2;

    Derived d1 {1000};
    Derived d2 {d1};
    d1 = d2;
    return 0;
}