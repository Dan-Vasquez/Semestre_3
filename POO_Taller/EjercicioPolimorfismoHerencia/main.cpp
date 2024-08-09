#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "Salaried_Employee.h"
#include "Hourly_Employee.h"
#include "Commission_Employee.h"
#include "BasePlus_Commission_Employee.h"
#include "Daily_Employee.h"


int main() {
    cout << fixed <<setprecision(2);
    vector <Employee *> employees(5);

    employees[0] = new Salaried_Employee("John", "Smith", "111-11-1111", 800);
    employees[1] = new Hourly_Employee("Karen", "Price", "222-22-2222", 16.75, 40);
    employees[2] = new Commission_Employee("Sue", "Jones", "333-33-3333", 10000, .06);
    employees[3] = new BasePlus_Commission_Employee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);
    employees[4] = new Daily_Employee("Camilo", "Gutierrez", "555-55-5555", 2000, 100);

    for(size_t i = 0; i < employees.size(); i++){
        employees[i]->print();
        cout << endl;

        BasePlus_Commission_Employee *derivedPtr = dynamic_cast < BasePlus_Commission_Employee * > (employees[i]);
        if(derivedPtr != 0){
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "old base salary: $" << oldBaseSalary << endl;
            derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
            cout << "new base salary with 10% increase is: $" << derivedPtr->getBaseSalary() << endl;
        }

        cout << "earned $" << employees[i]->earnings() << "\n\n";
    }

    for(size_t j = 0; j < employees.size(); j++){
        cout << "deleting object of " << typeid(*employees[j]).name() << endl;

        delete employees[j];
    }
    return 0;
}
