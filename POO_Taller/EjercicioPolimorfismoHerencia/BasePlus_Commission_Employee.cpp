//
// Created by dhasc on 1/04/2022.
//
#include <iostream>
#include "BasePlus_Commission_Employee.h"
using namespace std;

BasePlus_Commission_Employee::BasePlus_Commission_Employee(const string &first, const string &last, const string &ssn, double sales, double rate, double salary) : Commission_Employee(first, last, ssn) {
    setBaseSalary(salary);
}

void BasePlus_Commission_Employee::setBaseSalary(double salary) {
    baseSalary =((salary < 0.0) ? 0.0 : salary);
}

double BasePlus_Commission_Employee::getBaseSalary() const {
    return baseSalary;
}

double BasePlus_Commission_Employee::earnings() const {
    return getBaseSalary() + Commission_Employee::earnings();
}

void BasePlus_Commission_Employee::print() const {
    cout << "base-salaried";
    Commission_Employee::print();
    cout << "; base salary: " << getBaseSalary();
}