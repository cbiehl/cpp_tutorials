#ifndef VECTOR3_HPP
#define VECTOR3_HPP
#include <iostream>

template<typename T>
class Vector3 {
public:
	Vector3();
	Vector3(T a, T b, T c);
	Vector3(const Vector3 &other);
	~Vector3();
	Vector3 operator+(Vector3 &rhs);
	Vector3 operator-(Vector3 &rhs);
	Vector3<T> operator/(T rhs);
	T operator*(Vector3 &rhs);
	T getA() const{
		return a;
	}

	T getB() const{
		return b;
	}

	T getC() const{
		return c;
	}
	
private:
	T a, b, c;
	
};


template<typename T>
std::ostream& operator<<(std::ostream& out, const Vector3<T> rhs);

#include "Vector3.tpp"
#endif