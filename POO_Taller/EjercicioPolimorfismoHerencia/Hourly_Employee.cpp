#include <iostream>
#include "Hourly_Employee.h"
using namespace std;

Hourly_Employee::Hourly_Employee(const string &first, const string &last, const string &ssn, double hourlyWage, double hoursWorked) : Employee(first, last, ssn) {
    setWage(hourlyWage);
    setHours(hoursWorked);
}

void Hourly_Employee::setWage(double hourlyWage) {
    wage = (hourlyWage < 0.0 ? 0.0 : hourlyWage);
}

double Hourly_Employee::getWage() const {
    return wage;
}

void Hourly_Employee::setHours(double hoursWorked) {
    hours =(((hoursWorked >= 0.0) && (hoursWorked <= hoursPerWeek)) ? hoursWorked : 0.0);
}

double Hourly_Employee::getHours() const {
    return hours;
}

double Hourly_Employee::earnings() const {
    if(getHours() <= 40)
        return getWage() * getHours();
    else
        return 40 * getWage() + ((getHours() - 40) * getWage() * 1.5);
}

void Hourly_Employee::print() const {
    cout << "hourly employee: ";
    Employee::print();
    cout << "\nhourly wage: " << getWage() << "; hours worked: " << getHours();

}