#include "Employee.h"

Employee::Employee(){
	firstName = "";
	lastName = "";
}

Employee::Employee(string firstName, string lastName){
	this->firstName = firstName;
	this->lastName = lastName;
}

void Employee::setFirstName(string firstName){
	this->firstName = firstName;
}

void Employee::setLastName(string lastName){
	this->lastName = lastName;
}

string Employee::getFirstName(){
	return firstName;
}

string Employee::getLastName(){
	return lastName;
}

void Employee::display(){
	cout << endl << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
}