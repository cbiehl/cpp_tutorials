#include <iostream>
#include "PatternPrinter.hpp"

PatternPrinter::PatternPrinter(){
	
}

void PatternPrinter::printNSpaces(int n){
	for(int i = 0; i < n; i++){
		std::cout << ' ';
	}
}

void PatternPrinter::printNChars(int n){
	for(int i = 0; i < n; i++){
		std::cout << charGen.generateNextChar();
	}
	
	std::cout << std::endl;
}

void PatternPrinter::printPattern(int n, Direction direction){
	int i = n;
	
	while(i > 0){
		if(direction == Right){
			PatternPrinter::printNSpaces(n - i);
		}
		
		PatternPrinter::printNChars(i);
		i--;
	}
	
	i++;
	
	while(i < n){
		i++;
		if(direction == Right){
			PatternPrinter::printNSpaces(n - i);
		}
		
		PatternPrinter::printNChars(i);
	}
}