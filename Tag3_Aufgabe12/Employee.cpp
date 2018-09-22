#include <iostream>
#include "Employee.hpp"

using namespace std;

Employee::Employee(const string &name, const string &boss):
Person(name), boss(boss)
{
	cout << "New Employee created" << endl;
}

Employee::~Employee(){
	cout << "Employee destroyed" << endl;
}

string Employee::getInfo() const {
	return Person::getInfo() + string(", Boss: ") + boss;
}