#include <iostream>
#include "PatternPrinter.hpp"

int main(int argc, char **argv){
	/*
	CharGenerator charGen('x');
	char next = charGen.generateNextChar();
	std::cout << next << std::endl;
	*/
	
	PatternPrinter pat;
	pat.printPattern(10, Right);
	
	return 0;
}
