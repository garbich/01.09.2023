#pragma once
#include "SalaryWorker.h"

class Salesman : public SalaryWorker
{
private:
    double planPercentage; 
public:
    Salesman();

    Salesman(string firstName, string lastName, double salary, double bonus, double planPercentage);

    void setPlanPercentage(double planPercentage);

    double getPlanPercentage();

    double calculateBonus() override;

    void display() override;
};