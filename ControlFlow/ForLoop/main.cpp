#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    for (int i{1}; i<=10; ++i)
        cout << i << endl;
    cout << "End of loop." << endl;
    cout << "==========================" << endl;
    
    for (int i{0}; i<=10; i+=2)
        cout << i << endl;
    cout << "End of loop." << endl;
    cout << "==========================" << endl;
    
    for (int i{10}, j{2}; (i<=50 && i+j<=50); i+=10, ++j)
        cout << i << " + " << j << " is " << (i + j) << endl;
    cout << "==========================" << endl;
    
    for (int i{1}; i<=100; ++i) {
        cout << i;
        if (i % 10 == 0)
            cout << endl;
        else 
            cout << " ";
    }
    cout << "==========================" << endl;

    for (int i{1}; i<=100; ++i) {
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }
    cout << "==========================" << endl;

    vector<int> nums {10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;
    cout << "==========================" << endl;

	return 0;
}
 