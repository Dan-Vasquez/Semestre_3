//
// Created by dhasc on 1/04/2022.
//

#ifndef EJERCICIOPOLIMORFISMOHERENCIA_SALARIED_EMPLOYEE_H
#define EJERCICIOPOLIMORFISMOHERENCIA_SALARIED_EMPLOYEE_H

#include "Employee.h"

class Salaried_Employee: public Employee {
public:
    Salaried_Employee( const string &, const string &, const string &, double = 0.0 );

    void setWeeklySalary( double );
    double getWeeklySalary() const;

    virtual double earnings() const;
    virtual void print() const;
private:
    double weeklySalary;
};


#endif //EJERCICIOPOLIMORFISMOHERENCIA_SALARIED_EMPLOYEE_H
