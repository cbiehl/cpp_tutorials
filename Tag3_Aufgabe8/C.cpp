#ifndef C_HPP
#define C_HPP
#include "C.hpp"
#endif

#include <iostream>

C::C(){
	std::cout << "C Konstruktor aufgerufen" << std::endl;
}

C::C(const C &other){
	std::cout << "C Copy Konstruktor aufgerufen" << std::endl;
}

C::~C(){
	std::cout << "C Destruktor aufgerufen" << std::endl;
}

int C::getBla(){
	return bla;
}

double C::getBlub(){
	return blub;
}