#include <iostream>
#include "MyString.h"

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;

int main() {
    cout << boolalpha << endl;
    MyString a {"frank"};
    MyString b {"frank"};

    cout << "Returns true: " << (a == b) << endl;
    cout << "Returns false: " << (a != b) << endl;

    b = "george";
    cout << "Returns false: " << (a == b) << endl;
    cout << "Returns true: " << (a != b) << endl;
    cout << "Returns true: " << (a < b) << endl;
    cout << "Returns false: " << (a > b) << endl;

    MyString s1 {"FRANK"};
    s1 = -s1;
    cout << "Returns frank: " << s1 << endl;

    s1 = s1 + "*****";
    cout << "Returns frank*****: " << s1 << endl;

    s1 += "-----";
    cout << "Returns frank*****-----: " << s1 << endl;

    MyString s2 {"12345"};
    s1 = s2 * 3;
    cout << "Returns 123451234512345: " << s1 << endl;

    MyString s3 {"abcdef"};  
    s3 *= 5;
    cout << "Returns abcdefabcdefabcdefabcdefabcdef: " << s3 << endl;

    MyString s {"Frank"};
    ++s;
    cout << "Returns FRANK: " << s << endl;

    s = -s; 
    cout << "Returns frank: " << s << endl;

    MyString result;
    result = ++s;
    cout << "Returns FRANK: " << s << endl;
    cout << "Returns FRANK: " << result << endl;

    s = "Frank";
    s++;
    cout << "Returns FRANK: " << s << endl;

    s = -s;
    cout << "Returns frank: " << s << endl;
    result = s++;
    cout << "Returns FRANK: " << s << endl;
    cout << "Returns frank: " << result << endl;

    return 0;
}
