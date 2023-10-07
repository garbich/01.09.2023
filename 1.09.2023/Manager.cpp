#include "Manager.h"

Manager::Manager(){
	clientCount = 0;
}

Manager::Manager(string firstName, string lastName, double salary, double bonus, int clientCount) : SalaryWorker(firstName, lastName, salary, bonus){
	this->clientCount = clientCount;
}

void Manager::setClientCount(int clientCount){
	this->clientCount = clientCount;
}

int Manager::getClientCount(){
	return clientCount;
}

double Manager::calculateBonus(){
	if (clientCount > 200){
		setBonus(getBonus() * 3);
		return getBonus();
	}
	if (clientCount > 100){
		setBonus(getBonus() * 2);
		return getBonus();
	}
	return getBonus();
}

void Manager::display()
{
	cout << endl << getFirstName() << " " << getLastName() << endl;
	cout << "salary: " << getSalary() << ", bonus: " << calculateBonus() << ", client count: " << clientCount << ", month salary: " << calculateSalary() << endl;
}