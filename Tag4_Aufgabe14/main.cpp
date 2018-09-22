#include <iostream>
#include "Vector3.hpp"

int main(int argc, char **argv){
	std::cout << Vector3<int>(1, 2, 3) / 5 << std::endl; // should be (0, 0, 0)
	std::cout << Vector3<double>(1, 2, 3) / 5 << std::endl; // should be (0.2, 0.4, 0.6)
	
	return 0;
}
