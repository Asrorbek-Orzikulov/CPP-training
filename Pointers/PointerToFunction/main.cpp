#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void double_data(int *int_ptr);
void swap(int *a, int *b);
void display(const vector<string> *const v);
void display(const int *array, int sentinel);

int main(){
    cout << "\nFirst Example." << endl;
    int value {10};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;
    cout  << endl;

    int *int_ptr {nullptr};
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    cout << "-----------------------------\n" << endl;

    cout << "Second Example." << endl;
    int x {100}, y {200};
    cout << "x: " << x <<  endl;
    cout << "y: " << y <<  endl;
    swap(&x, &y);
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    cout << "-----------------------------" << endl;

    cout  << endl;
    cout << "Third Example." << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
    cout << "-----------------------------" << endl;

    cout  << endl;
    cout << "Fourth Example." << endl;
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);
    cout  << endl;

	return 0;
}

void double_data(int *int_ptr) {
   *int_ptr *= 2;	
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *const v) {
//(*v).at(0) = "Funny";  // pointer to a constant
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
  
 //   v = nullptr;  // constant pointer
}

void display(const int *array, int sentinel) {
    while (*array != sentinel)
        cout << *array++ << " ";  // Works due to lack of *const
    cout << endl;
}
