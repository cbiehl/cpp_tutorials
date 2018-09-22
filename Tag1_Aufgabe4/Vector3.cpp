#include <iostream>
#include "Vector3.hpp"

std::ostream& operator<<(std::ostream &out, Vector3 rhs){
	out << '(' << rhs.a << ", " << rhs.b << ", " << rhs.c << ')';
	return out;
}

Vector3::Vector3(){
	
}

Vector3::Vector3(double a, double b, double c){
	this->a = a;
	this->b = b;
	this->c = c;
}

Vector3::Vector3(const Vector3 &other){
	this->a = other.a;
	this->b = other.b;
	this->c = other.c;
}

Vector3::~Vector3(){
	// TODO ?
}

Vector3 Vector3::operator+(Vector3 rhs){
	Vector3 val(this->a + rhs.a, this->b + rhs.b, this->c + rhs.c);
	return val;
}

Vector3 Vector3::operator-(Vector3 rhs){
	Vector3 val(this->a - rhs.a, this->b - rhs.b, this->c - rhs.c);
	return val;
}

double Vector3::operator*(Vector3 rhs){
	return this->a * rhs.a + this->b * rhs.b + this->c * rhs.c;
}