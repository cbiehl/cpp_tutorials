#include <iostream>
#include "NumberExpression.hpp"

NumberExpression::NumberExpression(int n):
n(n)
{
	std::cout << "New NumberExpression created" << std::endl;
}

NumberExpression::~NumberExpression(){
	std::cout << "NumberExpression destroyed" << std::endl;
}

double NumberExpression::compute(){
	return n;
}