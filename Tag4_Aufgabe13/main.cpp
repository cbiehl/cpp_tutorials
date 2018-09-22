#include <iostream>
#include "C.hpp"

template<typename T>
const T &maximum(const T &t1, const T &t2){
	if(t1 > t2){
		return t1;
	}else{
		return t2;
	}
}

int main(int argc, char **argv){
	int i = 42;
	int j = 41;
	std::cout << maximum<int>(i, j) << std::endl;
	
	C c1(42);
	C c2(21);
	C c3 = maximum(c1, c2);
	std::cout << c3.getN() << std::endl;
	
	return 0;
}
