// Section 12
// Challenge

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
  
  You can also write a print function that expects a pointer to an array of integers and its size and display the
  elements in the array.
    
  For example,
  
  Below is the output from the following code which would be in main:
  
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,5);
    
    cout << "Array 2: " ;
    print(array2,3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);
   
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void print(const int *const array_ptr, size_t size);
int *apply_all(const int *const array_ptr1, size_t size1, 
               const int *const array_ptr2, size_t size2);

int main() {
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: ";
    print(array1, 5);
    cout << "Array 2: ";
    print(array2, 3);
    
    int *new_array {nullptr};
    new_array = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(new_array, 15);

    delete [] new_array;
    new_array = nullptr;
    return 0;
}

/*******************************************************************
This function expects:
    array_ptr - a pointer to an array of integers
    size - the number of integers in array_ptr

    The function loops through the array to whose first element 
    array_ptr points to and displays all those integers
********************************************************************/
void print(const int *const array_ptr, size_t size) {
    cout << "[ ";
    for (size_t i {0}; i < size; i++)
        cout << *(array_ptr + i) << " ";
    cout << "]" << endl;
}

/*******************************************************************
This function expects:
    array_ptr1 - a pointer to an array of integers
    size1 - the number of integers in array_ptr1
    array_ptr2 - a pointer to another array of integers
    size2 - the number of integers in array_ptr2

    The function dynamically allocates a new array that is of size = size1 * size2
    Then, it loops through each element of array_ptr2 and multiplies it across all 
    the elements of array_ptr1 and each product is stored in the newly created array
********************************************************************/
int *apply_all(const int *const array_ptr1, size_t size1, 
               const int *const array_ptr2, size_t size2) {
    int *new_storage {nullptr};
    new_storage = new int[size1 * size2];
    size_t new_index {};

    for (size_t i {0}; i < size2; i++)
         for (size_t j {0}; j < size1; j++) {
            new_storage[new_index] = array_ptr1[j] * array_ptr2[i];
            new_index++;
        }
    return new_storage;
}