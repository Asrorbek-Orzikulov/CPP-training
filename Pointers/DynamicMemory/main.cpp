#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << endl;
    int *int_ptr {nullptr};
    int_ptr = new int;  // allocate an integer on the heap
    cout << "The location on the heap is: " << int_ptr << endl;
    cout << "The garbage data is: " << *int_ptr << endl;
    *int_ptr = 100;
    cout << "Now it stores 100: " << *int_ptr << endl;
    cout << endl;
    delete int_ptr; // frees the allocated storage
    
    double *double_ptr {new double(75.25)};
    cout << "The location on the heap is: " << double_ptr << endl;
    cout << "Dereferencing the pointer yields " << *double_ptr << endl;
    delete double_ptr; // Never forget about it
    cout << endl;

    size_t size {};
    cout << "How many elements to store? ";
    cin >> size;
    cout << "The size of the size variable: " << sizeof(size) << endl;
    double *array_ptr {nullptr};
    array_ptr = new double[size];
    cout << "The location on the heap is: " << array_ptr << endl;
    delete [] array_ptr;  // Always delete to free up the storage

	return 0;
}
