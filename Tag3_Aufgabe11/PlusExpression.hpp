#ifndef BINARYEXPRESSION_HPP
#define BINARYEXPRESSION_HPP
#include "BinaryExpression.hpp"
#endif

class PlusExpression: public BinaryExpression {
public:
	PlusExpression(Expression *left, Expression *right);
	~PlusExpression();
	virtual double compute();
	
};