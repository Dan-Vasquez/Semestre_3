//
// Created by dhasc on 1/04/2022.
//

#ifndef EJERCICIOPOLIMORFISMOHERENCIA_BASEPLUS_COMMISSION_EMPLOYEE_H
#define EJERCICIOPOLIMORFISMOHERENCIA_BASEPLUS_COMMISSION_EMPLOYEE_H

#include "Commission_Employee.h"

class BasePlus_Commission_Employee : public Commission_Employee{
public:
    BasePlus_Commission_Employee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);
    void setBaseSalary(double);
    double getBaseSalary() const;

    virtual double earnings() const;
    virtual void print() const;
private:
    double baseSalary;
};


#endif //EJERCICIOPOLIMORFISMOHERENCIA_BASEPLUS_COMMISSION_EMPLOYEE_H
