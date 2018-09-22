#ifndef ELEVATORSTRATEGY_HPP
#define ELEVATORSTRATEGY_HPP
#include "ElevatorStrategy.hpp"
#endif

class SimpleElevatorStrategy: public virtual ElevatorStrategy {
public:
	virtual ~SimpleElevatorStrategy();
	virtual void createPlan(const Building *b);
	virtual int nextFloor();
};