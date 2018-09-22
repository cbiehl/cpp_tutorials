#include "Building.hpp"

Building::Building(int numberOfFloors){
	for(int i = 0; i < numberOfFloors; ++i){
		Floor *floor = new Floor();
		floors.push_back(*floor);
	}
}

int Building::getNumOfFloors(){
	return floors.size();
}

Floor &Building::getFloor(int floor){
	return floors.at(floor);
}

Elevator &Building::getElevator(){
	return elevator;
}

void Building::letPeopleIn(){
	elevator.addPeople(floors.at(elevator.getFloor()).removeAllPeople());
}

void Building::moveElevatorToFloor(int i){
	elevator.moveToFloor(i);
}

void Building::addWaitingPerson(int floor, Person p){
	floors.at(floor).addWaitingPerson(p);
}

std::vector<Person> Building::removeArrivedPeople(){
	return elevator.removeArrivedPeople();
}