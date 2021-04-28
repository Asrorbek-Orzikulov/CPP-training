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
    return *this;   // returning a MyString object by reference
}

// Display method
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int MyString::get_length() const { return std::strlen(str); }
 
  // string getter
const char *MyString::get_str() const { return str; }


// Operator overloading with functions
bool operator==(const MyString &lhs, const MyString &rhs) { // Equality operator
    return (strcmp(lhs.str, rhs.str) == 0);
}

MyString operator-(const MyString &obj) { // Minus operator
    size_t size {strlen(obj.str)};
    char *temp_ptr {nullptr};
    temp_ptr = new char[size + 1] {};
    for (size_t i {}; i < size; i++)
        temp_ptr[i] = tolower(obj.str[i]);

    MyString temp_string {temp_ptr};
    delete [] temp_ptr;
    return temp_string;
}

MyString operator+(const MyString &lhs, const MyString &rhs) { // Plus operator
    size_t size {strlen(lhs.str) + strlen(rhs.str)};
    char *temp_ptr {nullptr};
    temp_ptr = new char [size + 1];
    strcpy(temp_ptr, lhs.str);
    strcat(temp_ptr, rhs.str);
    MyString temp_string {temp_ptr};
    delete [] temp_ptr;   // Deallocating memory
    return temp_string;
}