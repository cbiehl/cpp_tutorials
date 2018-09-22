#include <iostream>
#include "Vector3.hpp"

int main(int argc, char **argv)
{
	Vector3 a(2, 4, 6);
	Vector3 b(1, 2, 3);
	Vector3 c(0, 6, 4);
	
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " * " << c << " = " << a * c << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << b << " - " << c << " = " << b - c << std::endl;
	
	return 0;
}
