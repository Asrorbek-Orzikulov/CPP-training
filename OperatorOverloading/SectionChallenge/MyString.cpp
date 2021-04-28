#include <cstring>
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
ostream &operator<<(ostream &os, const MyString &obj) { // insertion operator
    std::cout << obj.str;
    return os;
}

istream &operator>>(istream &is, MyString &obj) { // extraction operator
    char *temp_str {new char [1000] {}};
    is >> temp_str;
    obj = MyString {temp_str};
    delete [] temp_str;
    return is;
}

bool operator==(const MyString &lhs, const MyString &rhs) { // Equality operator
    return (strcmp(lhs.str, rhs.str) == 0);
}

bool operator!=(const MyString &lhs, const MyString &rhs) { // Inequality operator
    return not (lhs == rhs);
}

MyString operator-(const MyString &obj) { // Make lowercase
    size_t size {strlen(obj.str)};
    char *temp_ptr {nullptr};
    temp_ptr = new char[size + 1] {};
    for (size_t i {}; i < size; i++)
        temp_ptr[i] = tolower(obj.str[i]);

    MyString temp_string {temp_ptr};
    delete [] temp_ptr;
    return temp_string;
}

MyString operator+(const MyString &lhs, const MyString &rhs) { // Concatenation
    size_t size {strlen(lhs.str) + strlen(rhs.str)};
    char *temp_ptr {nullptr};
    temp_ptr = new char [size + 1];
    strcpy(temp_ptr, lhs.str);
    strcat(temp_ptr, rhs.str);
    MyString temp_string {temp_ptr};
    delete [] temp_ptr;   // Deallocating memory
    return temp_string;
}

void operator+=(MyString &lhs, const MyString &rhs) { // concat and assign
    lhs = lhs + rhs;
}

MyString &operator++(MyString &obj) { // Make uppercase - pre increment
    size_t size {strlen(obj.str)};
    for (size_t i {}; i < size; ++i)
        obj.str[i] = toupper(obj.str[i]);
    return obj;
}


// Operator overloading with methods
bool MyString::operator<(const MyString &rhs) const { // Less than operator
    return (strcmp(str, rhs.str) < 0);
}

bool MyString::operator>(const MyString &rhs) const { // Greater than operator
    return (strcmp(str, rhs.str) > 0);
}

MyString MyString::operator*(int repeat) const { // Repeat
    if (repeat < 0)
        return MyString {};

    size_t size {strlen(str) * repeat};
    char *str_arr {nullptr};
    str_arr = new char[size + 1] {};
    for (size_t i {}; i < repeat; ++i)
        strcat(str_arr, str);
    MyString temp = MyString {str_arr};
    delete [] str_arr;
    return temp;
}

void MyString::operator*=(int repeat) { // Repeat and assign
    *this = *this * repeat;
}

MyString MyString::operator++(int) { // Make uppercase - post-increment
    MyString temp {*this};
    ++(*this);
    return temp;
}


