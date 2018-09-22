#include <list>

#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif

class Elevator {
public:
	Elevator();
	int getFloor();
	const double getEnergyConsumed() const;
	void moveToFloor(int floor);
	const int getNumPeople() const;
	const std::list<PersonPtr> getContainedPeople() const;
	void addPeople(const std::list<PersonPtr> &people);
	std::list<PersonPtr> removeArrivedPeople();
	
private:
	int currentFloor;
	std::list<PersonPtr> containedPeople;
	double energyConsumed;
};