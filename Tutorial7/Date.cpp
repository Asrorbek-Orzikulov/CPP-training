#include "Date.h"
#include <iostream>

using std::cout;
using std::endl;

Date::Date(int day, int month, int year)
    : day {day}, 
      month {month}, 
      year {year} {
}

void Date::print() const {
    cout << day << "-" << month << "-" << year << endl;
}
