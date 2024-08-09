#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h"

class Commission_Employee : public Employee {
public:
    Commission_Employee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setCommissionRate(double);
    double getCommissionRate() const;

    void setGrossSales(double);
    double getGrossSales() const;

    virtual double earnings() const;
    virtual void print() const;

private:
    double grossSales;
    double commissionRate;
};

#endif