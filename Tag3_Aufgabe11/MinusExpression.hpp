#ifndef BINARYEXPRESSION_HPP
#define BINARYEXPRESSION_HPP
#include "BinaryExpression.hpp"
#endif

class MinusExpression: public BinaryExpression {
public:
	MinusExpression(Expression *left, Expression *right);
	~MinusExpression();
	virtual double compute();
	
};