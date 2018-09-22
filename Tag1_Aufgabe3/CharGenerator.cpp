#include "CharGenerator.hpp"

CharGenerator::CharGenerator(char initialChar){
	nextChar = initialChar;
}
	
char CharGenerator::generateNextChar(){
	char val = nextChar;
	if(nextChar % 'z' == 0){
		nextChar = 'a';
	}else{
		nextChar = nextChar + 1;
	}
	
	return val;
}