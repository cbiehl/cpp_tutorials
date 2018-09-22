#include <string>
#include <iostream>
#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif
#include "StudentAssistant.hpp"

using namespace std;

StudentAssistant::StudentAssistant(const string &name, const string &studentID, const string &boss):
Person(name), Student(name, studentID), Employee(name, boss)
{
	
}

StudentAssistant::~StudentAssistant(){
	
}

string StudentAssistant::getInfo() const{
	return string("Name: ") + Employee::name + string(", Boss: ") + Employee::boss + string(", ID: ") + Student::studentID;
}