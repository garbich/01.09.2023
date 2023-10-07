#include "SalaryWorker.h"

SalaryWorker::SalaryWorker(){
    salary = 0;
    bonus = 1;
}

SalaryWorker::SalaryWorker(string firstName, string lastName, double salary, double bonus) : Employee(firstName, lastName){
    this->salary = salary;
    this->bonus = bonus;
}

void SalaryWorker::setSalary(double salary){
    this->salary = salary;
}

void SalaryWorker::setBonus(double bonus){
    this->bonus = bonus;
}

double SalaryWorker::getSalary(){
    return salary;
}

double SalaryWorker::getBonus(){
    return bonus;
}

double SalaryWorker::calculateSalary(){
    return salary + bonus;
}