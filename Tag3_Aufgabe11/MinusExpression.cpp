#include <iostream>
#include "MinusExpression.hpp"

MinusExpression::MinusExpression(Expression *left, Expression *right):
BinaryExpression(left, right)
{
	std::cout << "New MinusExpression created" << std::endl;
}

MinusExpression::~MinusExpression(){
	std::cout << "MinusExpression destroyed" << std::endl;
}

double MinusExpression::compute(){
	return this->left->compute() - this->right->compute();
}