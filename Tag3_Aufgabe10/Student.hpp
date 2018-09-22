#include <string>
#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif

using namespace std;

class Student: public Person {
public:
	Student(const string &name, const string &studentID);
	virtual ~Student();
	virtual string getInfo() const;
	
private:
	string studentID;
};