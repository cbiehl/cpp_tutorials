#include <iostream>
#include "NumberExpression.hpp"
#include "PlusExpression.hpp"
#include "MinusExpression.hpp"


int main(int argc, char **argv){
	NumberExpression* num42 = new NumberExpression(42);
	NumberExpression* num12 = new NumberExpression(12);
	NumberExpression* num10 = new NumberExpression(10);
	MinusExpression* minusExpression = new MinusExpression(num42, num12);

	PlusExpression e(minusExpression, num10);
	std::cout << e.compute() << std::endl;
	
	delete num42;
	delete num12;
	delete num10;
	delete minusExpression;
	
	return 0;
}
