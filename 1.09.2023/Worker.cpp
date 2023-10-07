#include "Worker.h"

Worker::Worker() : Employee(){
    hoursNumber = 0;
    hourlyRate = 0;
}

Worker::Worker(string firstName, string lastName, int hoursNumber, int hourlyRate) : Employee(firstName, lastName){
    this->hoursNumber = hoursNumber;
    this->hourlyRate = hourlyRate;
}

void Worker::setHoursNumber(int hoursNumber){
    this->hoursNumber = hoursNumber;
}

void Worker::setHourlyRate(int hourlyRate){
    this->hourlyRate = hourlyRate;
}

int Worker::getHoursNumber(){
    return hoursNumber;
}

int Worker::getHourlyRate(){
    return hourlyRate;
}

double Worker::calculateSalary(){
    if (hoursNumber > 40){
        int temp = hoursNumber - 40;
        int salary = hourlyRate * 40;
        salary = salary + temp * hourlyRate * 2;
        return salary;
    }
    return hoursNumber * hourlyRate;
}

void Worker::display(){
    cout << endl << getFirstName() << " " << getLastName() << endl;
    cout << "hours number: " << hoursNumber << ", hourly rate: " << hourlyRate << ", month salary: " << calculateSalary() << endl;
}