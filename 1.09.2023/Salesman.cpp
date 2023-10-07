#include "Salesman.h"

Salesman::Salesman(){
	planPercentage = 0;
}

Salesman::Salesman(string firstName, string lastName, double salary, double bonus, double planPercentage)
	: SalaryWorker(firstName, lastName, salary, bonus){
	this->planPercentage = planPercentage;
}

void Salesman::setPlanPercentage(double planPercentage){
	this->planPercentage = planPercentage;
}

double Salesman::getPlanPercentage(){
	return planPercentage;
}

double Salesman::calculateBonus(){
	setBonus(getBonus() * planPercentage / 100.0);
	return getBonus();
}

void Salesman::display(){
	cout << endl << getFirstName() << " " << getLastName() << endl;
	cout << "salary: " << getSalary() << ", bonus: " << calculateBonus() << ", plan percentage: " << planPercentage << ", month salary: " << calculateSalary() << endl;
}