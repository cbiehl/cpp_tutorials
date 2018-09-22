#include <iostream>
#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP
#include "Expression.hpp"
#endif

class BinaryExpression: public Expression {
public:
	BinaryExpression(Expression *left, Expression *right):
	left(left), right(right)
	{
		std::cout << "New BinaryExpression created" << std::endl;
	};
	
	virtual ~BinaryExpression(){
		std::cout << "BinaryExpression destroyed" << std::endl;
	};
	
protected:
	Expression *left, *right;
};