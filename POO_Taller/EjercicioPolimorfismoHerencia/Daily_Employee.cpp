#include <iostream>
#include "Daily_Employee.h"
using namespace std;

Daily_Employee::Daily_Employee(const string &first, const string &last, const string &ssn, double dailyWage, double workedDays) : Employee( first, last, ssn) {
    setDailyWage(dailyWage);
    setWorkedDays(workedDays);
}

void Daily_Employee::setDailyWage(double wage){
    dailyWage = (wage < 0.0 ? 0.0 : wage);
}

double Daily_Employee::getDailyWage() const{
    return dailyWage;
}

void Daily_Employee::setWorkedDays(double days){
    workedDays = ((days >= 0.0) ? days : 0.0);
}

double Daily_Employee::getWorkedDays() const{
    return workedDays;
}

double Daily_Employee::earnings() const {
    if(workedDays > 0)
        return dailyWage * workedDays;
    else
        return 0;
}

void Daily_Employee::print() const {
    cout << "daily employee: ";
    Employee::print();
    cout << "\ndaily wage: " << getDailyWage() << "; days worked: " << getWorkedDays();
}