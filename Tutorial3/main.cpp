#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void read_int_vector (int a [], size_t size);
void print_int_vector (const int a [], size_t size);
void print_double_vector (const double v [], size_t n);
void random_int_vector (int a [], size_t n, int m, int M);
void random_real_vector (double a [], size_t n, double m, double M);
double scalar_product(const double *const a1, const double *const a2, size_t size);
int search_min(const int arr[], size_t start, size_t end);
int search_min(const double arr[], size_t start, size_t end);
void selection_sort(int arr[], size_t size);
void selection_sort(double arr[], size_t size);

int main() {
    // Question 1
    const size_t size1 {7};
    int array1[size1] {};
    read_int_vector(array1, size1);
    print_int_vector(array1, size1);
    
    // Question 2
    int min_int {};
    int max_int {};
    cout << "Enter min and max integers separated by a space: ";
    cin >> min_int >> max_int;
    int array2[size1] {};
    random_int_vector(array2, size1, min_int, max_int);
    print_int_vector(array2, size1);

    // Questions 3-4
    double min_double {}, max_double {};
    cout << "Enter min and max doubles separated by a space: ";
    cin >> min_double >> max_double;
    double array3[size1] {};
    random_real_vector(array3, size1, min_double, max_double);
    print_double_vector(array3, size1);

    // Question5
    cout << "Enter min and max doubles separated by a space: ";
    cin >> min_double >> max_double;
    double array4[size1] {};
    random_real_vector(array4, size1, min_double, max_double);
    cout << "The first vector is:\n";
    print_double_vector(array4, size1);
    
    cout << "Enter min and max doubles separated by a space: ";
    cin >> min_double >> max_double;
    double array5[size1] {};
    random_real_vector(array5, size1, min_double, max_double);
    cout << "The second vector is:\n";
    print_double_vector(array5, size1);
    
    long double dot_product {};
    dot_product = scalar_product(array4, array5, size1);
    cout << "The scalar product is " << dot_product << endl;
    cout << endl;
    
    // Question 6
    int array6[] {3, 2, 5, 2, 6, 8, 4, 2, 5, 7, 1, 2};
    size_t size2 {12};
    print_int_vector(array6, size2);
    size_t start_idx {}, end_idx {}, min_idx {};
    cout << "Enter the start and end indices separated by a space: ";
    cin >> start_idx >> end_idx;
    min_idx = search_min(array6, start_idx, end_idx);
    cout << "The minimum element between " << start_idx
         << " and " << end_idx << " is " << min_idx << endl;
    cout << endl;
    
    // Question 7
    cout << "The contents of the array after sorting:\n";
    selection_sort(array6, size2);
    print_int_vector(array6, size2);
    cout << endl;
    
    cout << "The contents of the array before sorting:\n";
    print_double_vector(array5, size1);
    cout << "The contents of the array after sorting:\n";
    selection_sort(array5, size1);
    print_double_vector(array5, size1);
    cout << endl;

    return 0;
}

/*******************************************************************
This function expects:
    a - an array of integers read from the keyboard
    size - the number of integers in a

    The function reads integers from the keyboard and changes
    the array elements at appropriate positions.
********************************************************************/
void read_int_vector (int a [], size_t size) {
    cout << "Enter " << size << " integers separated by a space: ";
    for (size_t i {}; i < size; i++)
        cin >> a[i];
}

/*******************************************************************
This function expects:
    a - an array of integers
    size - the number of integers in a

    The function prints to the console the elements of a.
********************************************************************/
void print_int_vector (const int a [], size_t size) {
    cout << "{";
    for (size_t i {}; i < size-1; i++)
        cout << a[i] << ", ";
    cout << a[size - 1] << "}" << endl;
}

/*******************************************************************
This function expects:
    v - an array of doubles
    size - the number of doubles in v

    The function prints to the console the elements of v.
********************************************************************/
void print_double_vector (const double v [], size_t size) {
    cout << "{";
    for (size_t i {}; i < size-1; i++)
        cout << v[i] << ", ";
    cout << v[size - 1] << "}" << endl;
}

/*******************************************************************
This function expects:
    a - an array of integers
    n - the length of a
    m - the smallest possible integer
    M - the largest possible integer

    The function fills in the array a with n integers that are 
    randomly selected in range [m, M].
********************************************************************/
void random_int_vector (int a [], size_t n, int m, int M) {
    srand(time(nullptr));
    int random_number {};
    for (size_t i {}; i < n; i++) {
        random_number = rand() % (M - m + 1) + m;
        a[i] = random_number;
    }
}

/*******************************************************************
This function expects:
    a - an array of doubles
    n - the length of a
    m - the smallest possible double
    M - the largest possible double

    The function fills in the array a with n doubles that are 
    randomly selected in range [m, M].
********************************************************************/
void random_real_vector (double a [], size_t n, double m, double M) {
    srand(time(nullptr));
    double random_number {};
    for (size_t i {}; i < n; i++) {
        random_number = static_cast<double>(rand()) / RAND_MAX;
        random_number = random_number*(M-m) + m;
        a[i] = random_number;
    }
}

/*******************************************************************
This function expects:
    a1 - a pointer to the first array of doubles
    a2 - a pointer to the second array of doubles
    size - the size of the two arrays

    The function returns the scalar product of the two arrays.
********************************************************************/
double scalar_product(const double *const a1, const double *const a2, size_t size) {
    double product {};
    for (size_t i {}; i < size; i++)
        product += *(a1+i) * *(a2+i);   // The same as a1[i] * a2[i]
    return product;
}

/*******************************************************************
This function expects:
    arr - an array of integers
    start - the index at which search starts
    end - the index at which search ends

    The function returns the index of the minimum element between
    arr[start] and arr[end].
********************************************************************/
int search_min(const int arr[], size_t start, size_t end) {
    assert (start <= end);

    size_t min_idx {start};
    for (size_t i {start+1}; i<=end; i++) {
        if (arr[i] < arr[min_idx])
            min_idx = i;
    }
    return min_idx;
}

/*******************************************************************
This function expects:
    arr - an array of doubles
    start - the index at which search starts
    end - the index at which search ends

    The function returns the index of the minimum element between
    arr[start] and arr[end].
********************************************************************/
int search_min(const double arr[], size_t start, size_t end) {
    assert (start <= end);

    size_t min_idx {start};
    for (size_t i {start+1}; i<=end; i++) {
        if (arr[i] < arr[min_idx])
            min_idx = i;
    }
    return min_idx;
}

/*******************************************************************
This function expects:
    arr - an array of integers
    size - size of the array

    The function sorts the array and modifies it in place.
********************************************************************/
void selection_sort(int arr[], size_t size) {
    size_t current_min_idx {};
    int temp_val {};
    for (size_t start_idx{}; start_idx < size-1; start_idx++) {
        current_min_idx = search_min(arr, start_idx, size-1);
        temp_val = arr[current_min_idx];
        arr[current_min_idx] = arr[start_idx];
        arr[start_idx] = temp_val;
    }
}

/*******************************************************************
This function expects:
    arr - an array of doubles
    size - size of the array

    The function sorts the array and modifies it in place.
********************************************************************/
void selection_sort(double arr[], size_t size) {
    size_t current_min_idx {};
    double temp_val {};
    for (size_t start_idx{}; start_idx < size-1; start_idx++) {
        current_min_idx = search_min(arr, start_idx, size-1);
        temp_val = arr[current_min_idx];
        arr[current_min_idx] = arr[start_idx];
        arr[start_idx] = temp_val;
    }
}