#include "Patient.h"
#include <iostream>

using std::cout;
using std::endl;

Patient::Patient(string name)
    : name {name},
      sum_diastole {0},
      records {},
      max_records {},
      abnormal_records {} {
};

void Patient::addRecord(Blood record) {
    sum_diastole += record.get_diastole();
    records.push_back(record);
    int current_systole = record.get_systole();
    if (current_systole > 140)
        abnormal_records.push_back(record);

    if (max_records.size() == 0) {
        max_records.push_back(record);
        return;
    }

    Blood highest_record = max_records.at(max_records.size() - 1);
    if (highest_record.get_systole() == current_systole)
        max_records.push_back(record);
    else if (highest_record.get_systole() < current_systole) {
        max_records.clear();
        max_records.push_back(record);
    }
}

void Patient::printReport() const {
    cout << "\n>>>> The report of the patient " << name << ". >>>>";

    cout << "\n======== Highest abnormal systolic pressures ========\n";
    if (abnormal_records.size() == 0)
        cout << "No measurement was too high";
    else {
        for (const auto &record: max_records)
            record.print();
    }

    cout << "\n======== Average diastolic pressures ========\n";
    cout << "The mean is " 
         << static_cast<double>(sum_diastole) / records.size()
         << "." << endl;

    cout << "\n======== Highest systolic pressures ========\n";
    for (const auto &record: max_records)
        record.print();
}

void Patient::printAllRecors() const {
    cout << "\n====== All recorded pressures for " << name << " ======\n";
    for (const auto &record: records)
        record.print();
}

void Patient::printAbnormalRecords() const {
    cout << "\n====== All abnormal pressures for " << name << " ======\n";
    for (const auto &record: abnormal_records)
        record.print();
}
