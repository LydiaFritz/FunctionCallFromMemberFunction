#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
	std::string lastName;
	std::string studentID;
	std::string major;

	void setId() {
		//set id for the student
	}

public:
	Student(std::string ln, std::string major) :lastName(ln), major(major) {
		lastName = ln;
		this->major = major;
		setId();
	}
	
};

#endif
