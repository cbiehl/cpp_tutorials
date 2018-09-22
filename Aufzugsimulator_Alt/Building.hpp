#include <vector>

#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP
#include "Elevator.hpp"
#endif

#ifndef FLOOR_HPP
#define FLOOR_HPP
#include "Floor.hpp"
#endif

#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif

class Building {
public:
	Building(int numberOfFloors);
	int getNumOfFloors();
	Floor &getFloor(int floor);
	Elevator &getElevator();
	void letPeopleIn();
	void moveElevatorToFloor(int i);
	void addWaitingPerson(int floor, Person p);
	std::vector<Person> removeArrivedPeople();
	
private:
	std::vector<Floor> floors;
	Elevator elevator;
	
};