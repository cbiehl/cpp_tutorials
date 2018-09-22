class Person {
public:
	Person(int destinationFloor);
	Person(const Person &other);
	~Person();
	int getDestinationFloor() const;
	
private:
	int destinationFloor;
};