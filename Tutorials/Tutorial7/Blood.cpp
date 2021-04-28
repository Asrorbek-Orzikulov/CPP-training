#include "Blood.h"
#include <iostream>

using std::cout;
using std::endl;

Blood::Blood(int systole, int diastole, Date date)
    : systole {systole}, 
      diastole {diastole}, 
      date {date} {
}

void Blood::print() const {
    cout << "Systolic pressure: " << systole << ", "
         << "Diastolic pressure: " << diastole << ", "
         << "Date: ";
    date.print();
}


