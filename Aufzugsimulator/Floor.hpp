#include <list>

#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif

class Floor {
public:
	const int getNumPeople() const;
	const PersonPtr getPerson(int i) const;
	void addWaitingPerson(PersonPtr h);
	std::list<PersonPtr> removeAllPeople();
	
private:
	std::list<PersonPtr> containedPeople;
};