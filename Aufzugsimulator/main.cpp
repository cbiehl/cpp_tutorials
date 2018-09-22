#include <iostream>
#include <ctime>

#ifndef BUILDING_HPP
#define BUILDING_HPP
#include "Building.hpp"
#endif

#ifndef SIMPLEELEVATORSTRATEGY_HPP
#define SIMPLEELEVATORSTRATEGY_HPP
#include "SimpleElevatorStrategy.hpp"
#endif

using namespace std;
/*
std::list<int> runSimulation(Building &b){
	std::list<int> floors;
	for(int i = 0; i < b.getNumOfFloors(); ++i){
		b.moveElevatorToFloor(i);
		floors.push_back(i);
		b.letPeopleIn();
		int j;
		while(b.getElevator().getNumPeople() > 0){
			j = b.getElevator().getContainedPeople().front()->getDestinationFloor();
			b.moveElevatorToFloor(j);
			floors.push_back(j);
			b.removeArrivedPeople();
		}
	}
	
	cout << endl << "Consumed energy: " << b.getElevator().getEnergyConsumed() << endl;
	
	return floors;
}
*/

std::list<int> runSimulation(Building &b, ElevatorStrategy &strategy){
	list<int> floors;
	strategy.createPlan(&b);
	while(b.containsWaitingPeople() || b.getElevator().getNumPeople() > 0){
		int floor = strategy.nextFloor();
		floors.push_back(floor);
		b.moveElevatorToFloor(floor);
		b.removeArrivedPeople();
		b.letPeopleIn();
	}
	
	return floors;
}

int main(int argc, char **argv){
	clock_t start_time = clock();
	
	Building b(3);
	b.addWaitingPerson(0, make_shared<Person>(2));
	b.addWaitingPerson(1, make_shared<Person>(0));
	b.addWaitingPerson(2, make_shared<Person>(0));
	
	SimpleElevatorStrategy strategy;
	
	runSimulation(b, strategy);
	
	clock_t end_time = clock();
	
	cout << "Processor cycles: " << end_time - start_time << endl;
	
	return 0;
}
