#include <iostream>
#ifndef PERSON_HPP
#define PERSON_HPP
#include "Person.hpp"
#endif
#include "Student.hpp"

using namespace std;

void printInfo(const Person *person){
	cout << person->getInfo() << endl;
}

int main(int argc, char **argv){
	Person p1(string("Clemens"));
	Student s1(string("Kunigunde"), string("1759828"));
	Student s2(string("James Bond"), string("007"));
	
	printInfo(&p1);
	printInfo(&s2);
	
	cout << endl;
	
	Person *s3 = new Student(string("Bernd das Brot"), string("42"));
	delete s3;
	
	return 0;
}
