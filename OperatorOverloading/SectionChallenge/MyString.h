#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
using std::ostream;
using std::istream;

class MyString {
    friend ostream &operator<<(ostream &os, const MyString &obj);  // Insertion operator
    friend istream &operator>>(istream &is, MyString &obj);       // Extraction operator
    friend bool operator==(const MyString &lhs, const MyString &rhs);    // Equality operator
    friend bool operator!=(const MyString &lhs, const MyString &rhs);    // Inequality operator
    friend MyString operator-(const MyString &obj);                      // Minus operator
    friend MyString operator+(const MyString &lhs, const MyString &rhs);  // Plus operator
    friend void operator+=(MyString &lhs, const MyString &rhs);           // += operator
    friend MyString &operator++(MyString &obj);                           // Pre-increment operator

private:
    char *str;      // pointer to a char[] that holds a C-style string

public:
    MyString();                                            // No-args contstructor
    MyString(const char *const s);                         // Overloaded contstructor              
    MyString(const MyString &source);                      // Copy constructor
    MyString(MyString &&source) noexcept;                  // Move constructor
    ~MyString();                                          // Destructor
    MyString &operator=(const MyString &rhs);             // Copy assignment
    MyString &operator=(MyString &&rhs);                  // Move assignment
    bool operator<(const MyString &rhs) const;            // Less than operator
    bool operator>(const MyString &rhs) const;            // Greater than operator
    MyString operator*(int repeat) const;                 // Multiply operator
    void operator*=(int repeat);                          // *= operator
    MyString operator++(int);                             // Post-increment operator

    void display() const;
    int get_length() const;                           // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_