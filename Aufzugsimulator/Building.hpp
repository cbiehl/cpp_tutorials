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
	int getNumOfFloors() const;
	const Floor &getFloor(int floor) const;
	const Elevator &getElevator() const;
	void letPeopleIn();
	void moveElevatorToFloor(int i);
	void addWaitingPerson(int floor, PersonPtr p);
	std::list<PersonPtr> removeArrivedPeople();
	const bool containsWaitingPeople() const;
	
private:
	Floor &getFloor(int floor);
	std::vector<Floor> floors;
	Elevator elevator;
	
};