#pragma once
#include <iostream>

using namespace std;

class Employee
{
private:
	string firstName;    
	string lastName;     
public:
	
	Employee();

	Employee(string, string);

	void setFirstName(string);

	void setLastName(string);

	string getFirstName();

	string getLastName();

	virtual double calculateSalary() = 0;

	virtual void display();
};