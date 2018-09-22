#include <iostream>
#include <limits>

#include "functions.h"

int main(int argc, char **argv){
	std::cout << "Integer has sizeof " << sizeof(int) * 8 << " Bits"
			<< " with min " << std::numeric_limits<int>::min() 
			<< " and max " << std::numeric_limits<int>::max() 
			<< std::endl;
			
	std::cout << "Unsigned integer has sizeof " << sizeof(unsigned int) * 8 << " Bits"
			<< " with min " << std::numeric_limits<unsigned int>::min() 
			<< " and max " << std::numeric_limits<unsigned int>::max() 
			<< std::endl;
			
	std::cout << "Double has sizeof " << sizeof(double) * 8 << " Bits"
			<< " with min " << std::numeric_limits<double>::min() 
			<< " and max " << std::numeric_limits<double>::max() 
			<< std::endl;
			
	std::cout << "Unsigned short has sizeof " << sizeof(unsigned short) * 8 << " Bits"
			<< " with min " << std::numeric_limits<unsigned short>::min() 
			<< " and max " << std::numeric_limits<unsigned short>::max() 
			<< std::endl;

	std::cout << "Char has sizeof " << sizeof(char) * 8 << " Bits"
			<< " with min " << std::numeric_limits<char>::min() 
			<< " and max " << std::numeric_limits<char>::max() 
			<< std::endl;

	std::cout << "Bool has sizeof " << sizeof(bool) * 8 << " Bits"
			<< " with min " << std::numeric_limits<bool>::min() 
			<< " and max " << std::numeric_limits<bool>::max() 
			<< std::endl;
			
	printNewline(2);
	
	fun::giveMeAConsoleFigure();

	return 0;
}
