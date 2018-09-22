#include <iostream>
#include "functions.h"

char nextChar(){
	char val = c;
	if(c % 'z' == 0){
		c = 'a';
	}else{
		c = c + 1;
	}
	
	return val;
}

void printNewline(int n){
	while(n > 0){
		std::cout << std::endl;
		n--;
	}
}

void printSpaces(int n){
	for(int i = 0; i < n; i++){
		std::cout << ' ';
	}
}

void printStars(int n){
	for(int i = 0; i < n; i++){
		std::cout << '*';
	}
	
	std::cout << std::endl;
}

void printChars(int n){
	for(int i = 0; i < n; i++){
		std::cout << nextChar();
	}
	
	std::cout << std::endl;
}

void printFigure(int n, Direction direction){
	if(direction != Left && direction != Right){
		std::cout << "ERROR: Invalid value for Direction enum";
		std::cout << std::endl;
		return;
	}
	
	if(n > MAX_WIDTH){
		std::cout << "ERROR: MAX_WIDTH exceeded";
		std::cout << std::endl;
		return;
	}
	
	int i = n;
	
	while(i > 0){
		if(direction == Right){
			printSpaces(n - i);
		}
		//printStars(i);
		printChars(i);
		i--;
	}
	
	i++;
	
	while(i < n){
		i++;
		if(direction == Right){
			printSpaces(n - i);
		}
		//printStars(i);
		printChars(i);
	}
}

void fun::giveMeAConsoleFigure(){
	std::cout << "Please enter the figure width:" << std::endl;
	int width;
	std::cin >> width;
	
	std::cout << "Please enter the alignment (-1 for Left, 1 for Right):" << std::endl;
	int direction;
	std::cin >> direction;
	
	printFigure(width, (Direction) direction);
}