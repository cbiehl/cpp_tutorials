#include <iostream>
#include "Person.hpp"

Person::Person(int destinationFloor){
	std::cout << "New Person created with destination floor " << destinationFloor << std::endl;
	this->destinationFloor = destinationFloor;
}

Person::Person(const Person &other){
	std::cout << "Person with destination floor " << other.getDestinationFloor() << " copied" << std::endl;
	this->destinationFloor = other.getDestinationFloor();
}

Person::~Person(){
	std::cout << "Person with destination floor " << this->destinationFloor << " destroyed" << std::endl;
}

const int Person::getDestinationFloor() const{
	return destinationFloor;
}