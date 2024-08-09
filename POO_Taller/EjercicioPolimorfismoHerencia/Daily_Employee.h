#ifndef DAILY_H
#define DAILY_H

#include "Employee.h"

class Daily_Employee : public Employee{
public:
    Daily_Employee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setDailyWage(double);
    double getDailyWage() const;

    void setWorkedDays(double);
    double getWorkedDays() const;

    virtual double earnings() const;
    virtual void print() const;

private:
    double dailyWage;
    double workedDays;
};


#endif
