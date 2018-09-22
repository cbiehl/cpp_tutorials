#include <iostream>
#include "Student.hpp"

using namespace std;

Student::Student(const string &name, const string &studentID):
Person(name), studentID(studentID)
{
	cout << "New Student created" << ", ID: " << studentID << ", Name: " << name << endl;
}

Student::~Student(){
	cout << "Student destroyed" << ", ID: " << studentID << ", Name: " << name << endl;
}

string Student::getInfo() const{
	string info = Person::getInfo();
	return info + string(", ") + this->studentID;
}