#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::ostream;
using std::vector;

class I_Printable {
    friend ostream &operator<<(ostream &os, const I_Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~I_Printable() { cout << "I_Printable:: destructor" << endl; }
};

ostream &operator<<(ostream &os, const I_Printable &obj) { // Overloading << operator
    obj.print(os);
    return os;
}

class Account: public I_Printable {
public:
    virtual void print(ostream &os) const override {
        os << "Account::print is called.";
    }
    virtual ~Account() { cout << "Account:: destructor" << endl; }
};

class Checking: public Account  {
public:
    virtual void print(ostream &os) const override {
        os << "Checking::print is called.";
    }
    virtual ~Checking() { cout << "Checking:: destructor" << endl; }
};

class Savings: public Account  {
public:
    virtual void print (ostream &os) const override {
        os << "Savings::print is called.";
    }
    virtual ~Savings() { cout << "Savings:: destructor" << endl; }
};

class Trust: public Account  {
public:
    virtual void print (ostream &os) const override {
        os << "Trust::print is called.";
    }
    virtual ~Trust() { cout << "Trust:: destructor" << endl; }
};

int main() {

    cout << "\n === Pointers ==== " << endl;
    I_Printable *p1 = new Account();
    I_Printable *p2 = new Savings();
    I_Printable *p3 = new Checking();
    I_Printable *p4 = new Trust();

    cout << "\n === Vector ==== " << endl;
    vector<I_Printable *> print_objects {p1, p2, p3, p4};
    for (auto ptr: print_objects)
        cout << *ptr << endl;

    cout << "\n === Clean up ==== " << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}