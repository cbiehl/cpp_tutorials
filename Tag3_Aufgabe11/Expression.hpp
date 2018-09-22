#include <iostream>

class Expression {
public:
	Expression(){ 
		std::cout << "New Expression created" << std::endl;
	};
	
	virtual ~Expression(){
		std::cout << "Expression destroyed" << std::endl;
	};
	
	virtual double compute() = 0;
	
private:
	Expression(const Expression &expression); // copying forbidden
};