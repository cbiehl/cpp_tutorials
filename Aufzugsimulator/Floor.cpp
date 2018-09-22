#include <iostream>
#include "Floor.hpp"

const int Floor::getNumPeople() const{
	return containedPeople.size();
}

const PersonPtr Floor::getPerson(int i) const{
	int j = 0;
	std::list<PersonPtr>::const_iterator it = containedPeople.begin();
	while(it != containedPeople.end()){
		if(j == i){
			return *it;
		}else{
			++j;
			++it;
		}
	}
	
	return nullptr;
}

void Floor::addWaitingPerson(PersonPtr h){
	containedPeople.push_back(h);
}

std::list<PersonPtr> Floor::removeAllPeople(){
	std::list<PersonPtr> removedPeople = containedPeople;
	containedPeople.clear();
	
	return removedPeople;
}