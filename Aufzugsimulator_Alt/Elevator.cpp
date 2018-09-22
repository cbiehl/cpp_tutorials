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

double Elevator::getEnergyConsumed(){
	return energyConsumed;
}

int Elevator::getNumPeople(){
	return containedPeople.size();
}

Person Elevator::getPerson(int i){
	if(getNumPeople() > i){
		return containedPeople.at(i);
	}else{
		return NULL;
	}
}

void Elevator::addPeople(std::vector<Person> people){
	for(std::vector<Person>::iterator it = people.begin(); it != people.end(); ++it){
		containedPeople.push_back(*it);
	}
}

std::vector<Person> Elevator::removeArrivedPeople(){
	std::vector<Person> removedPeople;
	std::vector<Person>::iterator it = containedPeople.begin();
	while(it != containedPeople.end()){
		if((*it).getDestinationFloor() == currentFloor){
			removedPeople.push_back(*it);
			it = containedPeople.erase(it);
		}else{
			++it;
		}
	}
	
	return removedPeople;
}

void Elevator::moveToFloor(int floor){
	energyConsumed = energyConsumed + std::abs(floor - currentFloor);
	currentFloor = floor;
	std::vector<Person> removedPeople = removeArrivedPeople();
	std::cout << removedPeople.size() << " person(s) exited on floor " << floor << std::endl;
}