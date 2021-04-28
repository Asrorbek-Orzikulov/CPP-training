#include <IntVector.h>

int main() {
    // TEST CONSTRUCTOR AND cout<<
    int v1 [] = {1,2,3,4};
    IntVector iv1(v1,4);
    cout << iv1 << endl;

    // TEST maxEven()
    int v2 [] = {3,99,88,1,2,3,4};
    IntVector iv2(v2,7);
    cout << iv2.maxEven() << endl;

    // TEST f(int) 
    int v3 [] = {4,22,88,1,2,3,9};
    IntVector iv3(v3,7);
    cout  << iv3.f(1) << " " << iv3.f(7) << endl;
    return 0;
}