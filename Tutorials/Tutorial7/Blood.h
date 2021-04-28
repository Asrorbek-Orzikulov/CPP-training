#ifndef _BLOOD_H_
#define _BLOOD_H_

#include "Date.h"

class Blood {
private:
    int systole;
    int diastole;
    Date date;

public:
    Blood(int systole, int diastole, Date date);
    ~Blood() = default;
    int get_systole() const { return systole; }
    int get_diastole() const { return diastole; }
    Date get_date() const { return date; }

    /*******************************************************************
    This method does not expect any arguments and prints the systolic 
    pressure, diastolic pressure, and date of a blood pressure record.
    ********************************************************************/
    void print() const;
};

#endif // _BLOOD_H_


