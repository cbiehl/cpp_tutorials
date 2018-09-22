#include <string>
#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif

class Employee: public virtual Person {
public:
	Employee(const std::string &name, const std::string &boss);
	virtual ~Employee();
	virtual std::string getInfo() const;
	
protected:
	std::string boss;
};
