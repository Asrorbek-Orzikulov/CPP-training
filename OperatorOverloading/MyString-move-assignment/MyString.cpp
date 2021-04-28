#include <cstring>
#include <iostream>
#include "MyString.h"

// No-args constructor
MyString::MyString() 
    : str {nullptr} {
        str = new char[1];
        *str = '\0';
}

// Overloaded constructor
MyString::MyString(const char *const s)  // expects a C-style string or string literal
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
MyString::MyString(const MyString &source)
     : str {nullptr} {
         std::cout << "Copy constructor is called." <<std::endl;
         str = new char[std::strlen(source.str )+ 1];
         std::strcpy(str, source.str);
}

// Move constructor
MyString::MyString(MyString &&source) noexcept
    : str {source.str} {
        std::cout << "Move constructor is called." <<std::endl;
        source.str = nullptr;
}

// Destructor
MyString::~MyString() {
    delete [] str;
}

// Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Copy assignment is called." << std::endl;
    if (this == &rhs)
        return *this;  // returning a MyString object by reference

    delete [] str;
    str = new char [strlen(rhs.str) + 1] {};
    strcpy(str, rhs.str);
    return *this;  // returning a MyString object by reference
}

// Move assignment
MyString &MyString::operator=(MyString &&rhs) {
    std::cout << "Move assignment is called." << std::endl;
    if (this == &rhs)
        return *this;  // returning a MyString object by reference

    delete [] str;
    str = rhs.str;   // Stealing rhs's pointer
    rhs.str = nullptr;
    return *this;  // returning a MyString object by reference
}


// Display method
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int MyString::get_length() const { return std::strlen(str); }
 
  // string getter
const char *MyString::get_str() const { return str; }