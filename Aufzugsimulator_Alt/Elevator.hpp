#include <vector>

#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif

class Elevator {
public:
	Elevator();
	int getFloor();
	double getEnergyConsumed();
	void moveToFloor(int floor);
	int getNumPeople();
	Person getPerson(int i);
	void addPeople(std::vector<Person> people);
	std::vector<Person> removeArrivedPeople();
	
private:
	int currentFloor;
	std::vector<Person> containedPeople;
	double energyConsumed;
};