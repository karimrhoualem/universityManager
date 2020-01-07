#include "Grade.h"

// CONSTRUCTORS AND DESTRUCTORS
Grade::Grade(Course course, string grade) :
	m_course(course), m_grade(grade) {
}


// SET AND GET METHODS
void Grade::setCourse(Course course) {
	m_course = course;
}

Course Grade::getCourse() const {
	return m_course;
}

void Grade::setGrade(string grade) {
	m_grade = grade;
}

string Grade::getGrade() const {
	return m_grade;
}


// OTHER MEMBER METHODS

// Overload the insertion operator to output the data members of a Grade object. 
ostream& operator<<(ostream& os, Grade& grade) {
	os << grade.getGrade();
	return os;
}