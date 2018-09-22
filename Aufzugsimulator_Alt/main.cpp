#include <iostream>
#include <ctime>

#include "Building.hpp"

using namespace std;

int main(int argc, char **argv){
	clock_t start_time = clock()
	Building b(3);
	b.addWaitingPerson(0, Person(2));
	b.addWaitingPerson(1, Person(0));
	b.addWaitingPerson(2, Person(0));
	
	for(int i = 0; i < b.getNumOfFloors(); ++i){
		b.moveElevatorToFloor(i);
		b.letPeopleIn();
		while(b.getElevator().getNumPeople() > 0){
			b.moveElevatorToFloor(b.getElevator().getPerson(0).getDestinationFloor());
			b.removeArrivedPeople();
		}
	}
	
	std::cout << std::endl << "Consumed energy: " << b.getElevator().getEnergyConsumed() << std::endl;
	
	clock_t end_time = clock();
	
	cout << "Processor cycles: " << end_time - start_time << endl;
	
	return 0;
}
