#pragma once
#include "Employee.h"

class Worker : public Employee
{
private:
    int hoursNumber;   
    int hourlyRate;    
public:
    Worker();

    Worker(string firstName, string lastName, int hoursNumber, int hourlyRate);

    void setHoursNumber(int hoursNumber);
    void setHourlyRate(int hourlyRate);

    int getHoursNumber();
    int getHourlyRate();

    double calculateSalary() override;

    void display() override;
};