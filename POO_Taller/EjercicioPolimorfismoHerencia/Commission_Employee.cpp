#include <iostream>
#include "Commission_Employee.h"
using namespace std;

Commission_Employee::Commission_Employee(const string &first, const string &last, const string &ssn, double sales, double rate) : Employee(first, last, ssn) {
    setGrossSales(sales);
    setCommissionRate(rate);
}

void Commission_Employee::setCommissionRate(double rate) {
    commissionRate = ((rate > 0.0 && rate < 1.0) ? rate: 0.0);
}

double Commission_Employee::getCommissionRate() const {
    return commissionRate;
}

void Commission_Employee::setGrossSales(double sales) {
    grossSales = ((sales < 0.0) ? 0.0 : sales);
}

double Commission_Employee::getGrossSales() const {
    return grossSales;
}

double Commission_Employee::earnings() const {
    return getCommissionRate() * getGrossSales();
}

void Commission_Employee::print() const {
    cout << "commission employee: ";
    Employee::print();
    cout << "\ngross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate();
}