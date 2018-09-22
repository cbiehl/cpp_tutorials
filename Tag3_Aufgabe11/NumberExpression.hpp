#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP
#include "Expression.hpp"
#endif

class NumberExpression: public Expression {
public:
	NumberExpression(int n);
	virtual ~NumberExpression();
	virtual double compute();
	
private:
	double n;
};