#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int *create_array(size_t size, int init_value = 0);
void display(const int *const array_ptr, size_t size);

int main(){
    size_t size {};
    cout << "\nHow many elements do you need? ";
    cin >> size;
    int init_value {};
    cout << "Enter the initial value: ";
    cin >> init_value;
    create_array(size, init_value);
    int *new_array {nullptr};
    new_array = create_array(size, init_value);
    display(new_array, size);
    cout << "The pointer before releasing is " << new_array << endl;    //////////
    delete [] new_array; ///////////
    cout << "The pointer after releasing is " << new_array << endl;    //////////
    new_array = nullptr;
    cout << "The pointer after nullifying is " << new_array << endl;    //////////

	return 0;
}

int *create_array(size_t size, int init_value) {
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i {0}; i < size; i++)
        new_storage[i] = init_value;

    return new_storage;
}

void display(const int *const array_ptr, size_t size) {
    for (size_t i {0}; i < size; i++)
        cout << *(array_ptr + i) << " ";
    cout << endl;
}
