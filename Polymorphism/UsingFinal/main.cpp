#include <iostream>

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived final: public Base { 
public:
    virtual void say_hello() const override final { // The method can't be overriden
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

//class Another: public Derived { // Doesn't work because Derived class is declared as Final
//public:
//    virtual void say_hello() const override {  // Errror: cannot override final method
//        std::cout << "Hello - I'm a Another class object" << std::endl;
//    }
//};

void greetings(const Base &obj) {
    std::cout << "Greetings: " ;
    obj.say_hello();
}

int main() {
    Base b;
    b.say_hello();                      // Base::say_hello()
    Derived d;
    d.say_hello();                      // Derived::say_hello()

    Base *p1 = new Base();
    p1->say_hello();                     // Base::say_hello()
    Derived *p2 = new Derived();
    p2->say_hello();                   // Derived::say_hello()
    
    Base *p3 = new Derived();

    std::cout <<  "\n========================" << std::endl;
    greetings(b);
    greetings(d);
    greetings(*p1);
    greetings(*p2);
    greetings(*p3);
    return 0;
}