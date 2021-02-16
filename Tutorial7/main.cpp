#include <iostream>
#include "Date.h"
#include "Blood.h"
#include "Patient.h"
#include "StackI.h"
#include "Stack.h"
#include "FullStackException.h"
#include "EmptyStackException.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(){
    cout << "\n============== Exercise 1 ==============" << endl;
    //inserting data for mary
    Patient mary("Mary");
    mary.addRecord(Blood(94, 61, Date(2, 5, 2013)));
    mary.addRecord(Blood(97, 65, Date(3, 5, 2013)));
    mary.addRecord(Blood(144, 99, Date(4, 5, 2013)));
    mary.addRecord(Blood(123, 88, Date(5, 5, 2013)));
    mary.addRecord(Blood(177, 110, Date(6, 5, 2013)));
    mary.addRecord(Blood(145, 89, Date(7, 5, 2013)));

    // inserting data for john
    Patient john("John");
    john.addRecord(Blood(88, 57, Date(15, 5, 2013)));
    john.addRecord(Blood(95, 61, Date(16, 5, 2013)));
    john.addRecord(Blood(114, 80, Date(17, 5, 2013)));
    john.addRecord(Blood(151, 96, Date(18, 5, 2013)));
    john.addRecord(Blood(176, 104, Date(19, 5, 2013)));
    john.addRecord(Blood(176, 110, Date(20, 5, 2013)));

    // printing reports
    mary.printReport();
    john.printReport();

    // testing optional methods
    mary.printAllRecors();
    mary.printAbnormalRecords();
    john.printAllRecors();
    john.printAbnormalRecords();

    cout << "\n============== Exercise 2 ==============" << endl;
    StackI<int> *my_stack = new Stack<int> {5};
    my_stack->print();

    // test #1: the pop method
    try {
        my_stack->pop();
    }
    catch (EmptyStackException &excp) {
        cerr << excp.what() << endl;
    }

    // test #1: the top method
    try {
        int last_elem = my_stack->top();
        cout << "The last element is: " << last_elem << endl;;
    }
    catch (EmptyStackException &excp) {
        cerr << excp.what() << endl;
    }

    // testing the push method
    my_stack->push(10);
    my_stack->push(5);
    my_stack->push(3);
    my_stack->push(-15);
    my_stack->push(20);
    my_stack->print();
    try {
        my_stack->push(9);
    }
    catch (FullStackException &excp) {
        cerr << excp.what() << endl;
    }
    
    // test #2: the pop method
    try {
        my_stack->pop();
    }
    catch (EmptyStackException &excp) {
        cerr << excp.what() << endl;
    }

    // test #2: the top method
    try {
        int last_elem = my_stack->top();
        cout << "The last element is: " << last_elem << endl;;
    }
    catch (EmptyStackException &excp) {
        cerr << excp.what() << endl;
    }

    delete my_stack;
    return 0;
}
