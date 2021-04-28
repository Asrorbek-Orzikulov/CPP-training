#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
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
    void display() const;
    int get_length() const;                           // getters
    const char *get_str() const;

};

#endif // _MYSTRING_H_
