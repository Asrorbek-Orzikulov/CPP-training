#ifndef _PATIENT_H_
#define _PATIENT_H_

#include <vector>
#include <string>
#include "Blood.h"

using std::vector;
using std::string;

class Patient {
    static constexpr const char *default_name = "Unnamed_patient";
    static constexpr int threshold_systole = 140;
    string name;
    int sum_diastole;
    vector<Blood> records;
    vector<Blood> max_records;
    vector<Blood> abnormal_records;
public:
    Patient(string name = default_name);
    ~Patient() = default;

    /*******************************************************************
    This method expects a Blood object with systolic pressure, diastolic 
    pressure, and the date on which they were measured.

    The method increments the `sum_diastole` by the record's diastolic
    pressure and updates `records`, `max_records` and `abnormal_records`
    as needed.
    ********************************************************************/
    void addRecord(Blood record);

    /*******************************************************************
    This method does not expect any arguments and prints the following
    information:
     * the highest abnormal systolic blood pressures, together with the 
    corresponding diastolic values, and the day they were measured;
     * the average diastolic blood pressure for the patient;
     * records whose systolic blood pressure is maximal.
    ********************************************************************/
    void printReport() const;

    /*******************************************************************
    This method does not expect any arguments and prints all systolic 
    blood pressures, together with the corresponding diastolic values, 
    and the day they were measured. (Not required in the task.)
    ********************************************************************/
    void printAllRecors() const;

    /*******************************************************************
    This method does not expect any arguments and prints all abnormal
    systolic pressures, together with the corresponding diastolic values, 
    and the day they were measured. (Not required in the task.)
    ********************************************************************/
    void printAbnormalRecords() const;
};

#endif // _PATIENT_H_
