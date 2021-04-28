#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    /************************************************************
     * All pointers in the program have the same size. It doesn't 
     * matter what they are pointing to.
     ***********************************************************/
    
    // Uninitialized pointers
    int *int_ptr;
    double *double_ptr;
    char *char_ptr;
    string *string_ptr;
    
    cout << "The size of int_ptr is " << sizeof(int_ptr) << endl;
    cout << "The size of double_ptr is " << sizeof(double_ptr) << endl;
    cout << "The size of char_ptr is " << sizeof(char_ptr) << endl;
    cout << "The size of string_ptr is " << sizeof(string_ptr) << endl;
    cout << endl;
    
    // Initialized pointers: they point nowhere.
    int *int_ptr2 {nullptr};
    double *double_ptr2 {nullptr};
    char *char_ptr2 {nullptr};
    string *string_ptr2 {nullptr};
    
    int num {10};
    cout << "The value of num is " << num << endl;
    cout << "The size of num is " << sizeof(num) << endl;
    cout << "The location of num is " << &num << endl;
    cout << endl;
    
    // Using nullptr with pointers
    cout << "The value of int_ptr is " << int_ptr << endl;
    cout << "The size of int_ptr is " << sizeof(int_ptr) << endl;
    cout << "The location of int_ptr is " << &int_ptr << endl;
    
    int_ptr = nullptr;
    cout << endl;
    cout << "The new value of int_ptr is " << int_ptr << endl;
    cout << "The new size of int_ptr is " << sizeof(int_ptr) << endl;
    cout << "The new location of int_ptr is " << &int_ptr << endl;
    cout << endl;
    
    // pointing to num
    int_ptr2 = &num;
    cout << "The location of num is " << &num << endl;
    cout << "The value of int_ptr2 is " << int_ptr2 << endl;
    cout << "The two should be the same. " << endl;

	return 0;
}
