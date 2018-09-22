#include "SimpleElevatorStrategy.hpp"

SimpleElevatorStrategy::~SimpleElevatorStrategy(){
	
}

int SimpleElevatorStrategy::nextFloor(){
	int nextFloor = 0;
	if(building->getElevator().getNumPeople() > 0){
		PersonPtr p = building->getElevator().getContainedPeople().front();
		nextFloor = p->getDestinationFloor();
	}else{
		int i = building->getNumOfFloors() - 1;
		while(i > 0){
			if(building->getFloor(i).getNumPeople() > 0){
				nextFloor = i;
				break;
			}
			
			--i;
		}
	}
	
	return nextFloor;
}

void SimpleElevatorStrategy::createPlan(const Building *b){
	this->building = b;
}

