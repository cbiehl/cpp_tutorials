#include <memory>

class Person {
public:
	Person(int destinationFloor);
	Person(const Person &other);
	~Person();
	const int getDestinationFloor() const;
	
private:
	int destinationFloor;
};

typedef std::shared_ptr<Person> PersonPtr;