#include <iostream>
#include <string>
#include "StudentAssistant.hpp"

using namespace std;

void printPersonInfo(const Person *person){
	cout << person->getInfo() << endl;
}

int main(int argc, char **argv){
	StudentAssistant hiwi(string("Jonathan"), string("007"), string("Bill"));	
	printPersonInfo(&hiwi);
	
	return 0;
}
