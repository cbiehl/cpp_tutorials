#include <string>
#include "Student.hpp"
#include "Employee.hpp"

class StudentAssistant: public Student, public Employee {
public:
	StudentAssistant(const string &name, const string &studentID, const string &boss);
	virtual ~StudentAssistant();
	virtual std::string getInfo() const;
};