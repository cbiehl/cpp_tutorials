#include "Building.hpp"

Building::Building(int numberOfFloors){
	for(int i = 0; i < numberOfFloors; ++i){
		Floor *floor = new Floor();
		floors.push_back(*floor);
	}
}

int Building::getNumOfFloors() const{
	return floors.size();
}

Floor &Building::getFloor(int floor){
	return floors.at(floor);
}

const Floor &Building::getFloor(int floor) const{
	return floors.at(floor);
}

const Elevator &Building::getElevator() const{
	return elevator;
}

void Building::letPeopleIn(){
	elevator.addPeople(floors.at(elevator.getFloor()).removeAllPeople());
}

void Building::moveElevatorToFloor(int i){
	elevator.moveToFloor(i);
}

void Building::addWaitingPerson(int floor, PersonPtr p){
	floors.at(floor).addWaitingPerson(p);
}

std::list<PersonPtr> Building::removeArrivedPeople(){
	return elevator.removeArrivedPeople();
}

const bool Building::containsWaitingPeople() const{
	for(int i = 0; i < getNumOfFloors(); ++i){
		if(getFloor(i).getNumPeople() > 0){
			return 1;
		}
	}
	
	return 0;
}