#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    
    int num {100};
    int &ref {num};  // Alies for num
    int ref2 {num};

    cout << "The num is " << num << endl;
    cout << "The ref is " << ref << endl;
    cout << "The location of num is " << &num << endl;
    cout << "The location of ref is " << &ref << endl;
    cout << "The location of ref2 is " << &ref2 << endl;
    cout << "---------------------------------\n" << endl;

    num  = 200;
    cout << num << endl;
    cout << ref << endl;
    cout << "---------------------------------\n" << endl;
 
    ref = 300;
    cout << num << endl;
    cout << ref << endl;
    cout << "---------------------------------\n" << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto str: stooges)
        str = "Funny";              // str is a COPY of the each vector element

    for (auto str: stooges)        // No change
        cout << str << endl;
    cout << "---------------------------------\n" << endl;
    
    for (auto &str: stooges)  // str is a reference to each vector element
        str = "Funny";

    for (const auto &str: stooges) {  // notice we are using const
        cout << str << endl;         // now the vector elements have changed
//        str = "Great";             // raises an error due to const
    }
    cout << "---------------------------------\n" << endl;

    return 0;
}
