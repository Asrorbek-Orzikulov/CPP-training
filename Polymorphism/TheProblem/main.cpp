#include <iostream>
#include <memory>

using std::cin;
using std::cout;
using std::endl;

class Base {
public:
    void say_hello() const {
        cout << "Hello - I'm a Base class object" << endl;
    }
};

class Derived: public Base {
public:
    void say_hello()  const {   
        cout << "Hello - I'm a Derived class object" << endl;
    }
};

void greetings(const Base &obj) {
    cout << "Greetings: ";
    obj.say_hello();  // calls Base::say_hello()
}

int main() {
    Base base;
    base.say_hello();

    Derived derived;
    derived.say_hello();

    greetings(base);
    greetings(derived);

    Base *ptr = new Derived();
    ptr->say_hello();  // calls Base::say_hello()

    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello(); // calls Base::say_hello()

    delete ptr;    
    return 0;
}
