#include "Course.h"

// CONSTRUCTORS AND DESTRUCTORS
Course::Course() : m_courseNumber(""), m_courseName("") {
}

Course::Course(string courseNumber, string courseName) :
	m_courseNumber(courseNumber), m_courseName(courseName) {
}

Course::~Course() {
}


// SET AND GET METHODS
void Course::setCourseNumber(string courseNumber) {
	m_courseNumber = courseNumber;
}

string Course::getCourseNumber() const {
	return m_courseNumber;
}

void Course::setCourseName(string courseName) {
	m_courseName = courseName;
}

string Course::getCourseName() const {
	return m_courseName;
}


// PRINT METHOD
void Course::print() {
	cout << "Course Number: " << getCourseNumber() << endl;
	cout << "Course Name: " << getCourseName() << endl;
}