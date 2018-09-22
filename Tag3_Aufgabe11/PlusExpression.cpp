#include <iostream>
#ifndef BINARYEXPRESSION_HPP
#define BINARYEXPRESSION_HPP
#include "BinaryExpression.hpp"
#endif
#include "PlusExpression.hpp"

PlusExpression::PlusExpression(Expression *left, Expression *right):
BinaryExpression(left, right)
{
	std::cout << "New PlusExpression created" << std::endl;
}

PlusExpression::~PlusExpression(){
	std::cout << "PlusExpression deleted" << std::endl;
}

double PlusExpression::compute(){
	return this->left->compute() + this->right->compute();
}