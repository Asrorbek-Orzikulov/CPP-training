#include <iostream>
#include "IntQueue.h"
#include "HelperFunctions.h"

using namespace std;

int main() {
    cout << "\n============= Q1 =============" << endl;
    int v[4], a=100, b=200;
    for (int i=0; i<4; i++)
        cin >> v[i];

    a = f1(v, 4, b);
    cout << a << " " << b << " "
         << v[0] << " " << v[1] << " " 
         << v[2] << " " << v[3] << endl;

    cout << "\n============= Q2 =============" << endl;
    cout << f(1) << endl;
    cout << f(7) << endl;
    cout << f(8) << endl;

    cout << "\n============= Q3 =============" << endl;
    // TEST constructor and cout<<
    IntQueue iq1(5);
    cout << iq1 << endl;
    IntQueue iq2 {iq1};
    cout << iq1.getQ() << " and " << iq2.getQ() << endl;
    cout << endl;

    // TEST CASE fill(int*,int)
    IntQueue iq3(5); 
    int v1 [] = {1,2,3,4};
    iq3.fill(v1,4);
    cout << iq3 << endl;
    cout << endl;

    // TEST reset()
    IntQueue iq4(5);
    int v2 [] = {1,2,3,4};
    iq4.fill(v2,4);
    cout << iq4 << endl;
    iq4.reset(); 
    cout << iq4 << endl;
    cout << endl;

    // TEST empty()
    IntQueue iq5(5);
    int v3 [] = {1,2,3,4};
    iq5.fill(v3,4);
    cout << iq5 << endl;
    iq5.empty();
    cout << iq5 << endl;
    int* elements = iq5.getQ();
    cout << elements << endl;
    IntQueue iq6 {iq5};
    cout << iq6 << endl;
    cout << endl;

    // TEST add(int) and remove()
    IntQueue iq7(5);
    iq7.add(1);
    iq7.add(2);
    iq7.add(3);
    iq7.add(4);
    iq7.add(5);
    iq7.remove();
    cout << iq7 << endl;
    cout << endl;

    IntQueue iq8 {iq7};
    cout << iq8 << endl;
    cout << endl;
    return 0;
}