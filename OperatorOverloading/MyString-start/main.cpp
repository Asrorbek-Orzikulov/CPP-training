#include <iostream>
#include "MyString.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    MyString empty;                      // no-args constructor
    MyString larry("Larry");             // overloaded constructor
    MyString stooge {larry};            // copy constructor 

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}
