#include <iostream>

class Vector3 {
public:
	Vector3();
	Vector3(double a, double b, double c);
	Vector3(const Vector3 &other);
	~Vector3();
	Vector3 operator+(Vector3 rhs);
	Vector3 operator-(Vector3 rhs);
	double operator*(Vector3 rhs);
	
private:
	double a, b, c;
	
friend std::ostream& operator<<(std::ostream &out, Vector3 rhs);

};