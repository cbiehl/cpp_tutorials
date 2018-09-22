#include <stdio.h>
#include "C.hpp"

int main(int argc, char **argv)
{
	try{
		throw C();
		
	}catch(C c){
		
	}catch(const C &c){
		
	}
	
	return 0;
}
