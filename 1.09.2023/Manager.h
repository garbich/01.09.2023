#pragma once
#include "SalaryWorker.h"

class Manager : public SalaryWorker
{
private:
    int clientCount; 
public:
    Manager();

    Manager(string firstName, string lastName, double salary, double bonus, int clientCount);

    void setClientCount(int clientCount);

    int getClientCount();

    double calculateBonus() override;

    void display();
};