#pragma once
#include "Employee.h"

class SalaryWorker : public Employee
{
private:
    double salary; 
    double bonus;  
public:
    SalaryWorker();

    SalaryWorker(string firstName, string lastName, double salary, double bonus);

    void setSalary(double salary);

    void setBonus(double bonus);

    double getSalary();

    double getBonus();

    virtual double calculateBonus() = 0;

    double calculateSalary();
};