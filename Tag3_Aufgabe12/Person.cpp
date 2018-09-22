#include <iostream>
#include "Person.hpp"

using namespace std;

Person::Person(const string &name){
	cout << "New Person" << ", Name: " << name << endl;
	this->name = name;
}

Person::~Person(){
	cout << "Person destroyed" << ", Name: " << name << endl;
}

string Person::getInfo() const{
	return this->name;
}