#ifndef BUILDING_HPP
#define BUILDING_HPP
#include "Building.hpp"
#endif

class ElevatorStrategy {
public:
	virtual ~ElevatorStrategy();
	virtual void createPlan(const Building *b);
	virtual int nextFloor() = 0;
	
protected:
	const Building *building;
};