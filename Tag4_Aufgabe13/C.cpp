#include "C.hpp"

C::C(int n):
n(n)
{
	
}

C::~C(){
	
}

int C::getN(){
	return this->n;
}

bool C::operator <(const C &other) const{
	return n < other.n;
}

bool C::operator >(const C &other) const{
	return n > other.n;
}