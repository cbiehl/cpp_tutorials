#include <vector>

#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif

class Floor {
public:
	int getNumPeople();
	Person getPerson(int i);
	void addWaitingPerson(Person h);
	std::vector<Person> removeAllPeople();
	
private:
	std::vector<Person> containedPeople;
};