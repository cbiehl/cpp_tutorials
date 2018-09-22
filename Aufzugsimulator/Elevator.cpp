#include <iostream>
#include <cmath>
#include "Elevator.hpp"

Elevator::Elevator(){
	currentFloor = 0;
	energyConsumed = 0.0;
	std::cout << "New elevator instantiated" << std::endl;
}

int Elevator::getFloor(){
	return currentFloor;
}

const double Elevator::getEnergyConsumed() const{
	return energyConsumed;
}

const int Elevator::getNumPeople() const{
	return containedPeople.size();
}

const std::list<PersonPtr> Elevator::getContainedPeople() const{
	return containedPeople;
}

void Elevator::addPeople(const std::list<PersonPtr> &people){
	for(std::list<PersonPtr>::const_iterator it = people.begin(); it != people.end(); ++it){
		containedPeople.push_back(*it);
	}
}

std::list<PersonPtr> Elevator::removeArrivedPeople(){
	std::list<PersonPtr> arrivedPeople;
	std::list<PersonPtr>::iterator it = containedPeople.begin();
	
	while(it != containedPeople.end()){
		if((**it).getDestinationFloor() == currentFloor){
			arrivedPeople.push_back(*it);
			it = containedPeople.erase(it);
		}else{
			++it;
		}
	}
	
	return arrivedPeople;
}

void Elevator::moveToFloor(int floor){
	energyConsumed = energyConsumed + std::abs(floor - currentFloor);
	currentFloor = floor;
	std::list<PersonPtr> removedPeople = removeArrivedPeople();
	std::cout << removedPeople.size() << " person(s) exited on floor " << floor << std::endl;
}