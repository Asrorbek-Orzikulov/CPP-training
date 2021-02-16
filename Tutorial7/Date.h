#ifndef _DATE_H_
#define _DATE_H_

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);
    ~Date() = default;

    /*************************************************************
    This method does not expect any arguments and prints the Date
    information in the day-month-year format.
    *************************************************************/
    void print() const;
};

#endif // _DATE_H_
