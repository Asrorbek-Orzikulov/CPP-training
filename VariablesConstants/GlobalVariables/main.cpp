#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int age_global {18}; // Global variable
int Asror {100};  // Global Asror

int main(){
    int age {24}; // Local variable
    cout << "Local age is: " << age << endl;
    cout << "Global age is: " << age_global << endl;
    cout << "====================================\n\n";
    
    int Asror {75}; // Local Asror, not accessible
    {
        int Asror {50};  // Block Asror
        cout << "Block Asror is " << Asror << endl;
        cout << "Global Asror is " << ::Asror << endl;
    }

	return 0;
}
