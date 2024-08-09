//
// Created by dhasc on 1/04/2022.
//
#include <iostream>
#include "Salaried_Employee.h"
using namespace std;

Salaried_Employee::Salaried_Employee(const string &first, const string &last, const string &ssn, double salary)
    :Employee( first, last, ssn )
{
    setWeeklySalary( salary );
}

void Salaried_Employee::setWeeklySalary( double salary ){
    weeklySalary = ( salary < 0.0 ) ? 0.0 : salary;
}

double Salaried_Employee::getWeeklySalary() const{
    return weeklySalary;
}

double Salaried_Employee::earnings() const{
    return getWeeklySalary();
}

void Salaried_Employee::print() const {
    cout << "salaried employee: ";
    Employee::print();
    cout << "\nweekly salary: " << getWeeklySalary();
}