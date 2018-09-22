template<typename T>
std::ostream& operator<<(std::ostream& out, const Vector3<T> rhs){
	out << "(" << rhs.getA() << ", " << rhs.getB() << ", " << rhs.getC() << ")";
	return out;
}

template<typename T>
Vector3<T>::Vector3(){
	
}

template<typename T>
Vector3<T>::Vector3(T a, T b, T c){
	this->a = a;
	this->b = b;
	this->c = c;
}

template<typename T>
Vector3<T>::Vector3(const Vector3<T> &other){
	this->a = other.a;
	this->b = other.b;
	this->c = other.c;
}

template<typename T>
Vector3<T>::~Vector3(){
	
}

template<typename T>
Vector3<T> Vector3<T>::operator+(Vector3<T> &rhs){
	Vector3<T> val(this->a + rhs.a, this->b + rhs.b, this->c + rhs.c);
	return val;
}

template<typename T>
Vector3<T> Vector3<T>::operator-(Vector3<T> &rhs){
	Vector3<T> val(this->a - rhs.a, this->b - rhs.b, this->c - rhs.c);
	return val;
}

template<typename T>
T Vector3<T>::operator*(Vector3<T> &rhs){
	return this->a * rhs.a + this->b * rhs.b + this->c * rhs.c;
}

template<typename T>
Vector3<T> Vector3<T>::operator/(T rhs){
	Vector3<T> val(a / rhs, b / rhs, c / rhs);
	return val;
}