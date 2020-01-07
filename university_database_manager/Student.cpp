#include "Student.h"

// CONSTRUCTORS AND DESTRUCTORS
Student::Student() : m_studentName(""), m_studentID(0) {

	// Initialize every pointer in the array to nullptr
	for (int i = 0; i < m_numOfferedCourses; i++) {
		m_arrayCourse[i] = nullptr;
	}
}

Student::Student(string studentName, int studentID) :
	m_studentName(studentName), m_studentID(studentID) {

	// Initialize every pointer in the array to nullptr
	for (int i = 0; i < m_numOfferedCourses; i++) {
		m_arrayCourse[i] = nullptr;
	}
}

Student::~Student() {
}


// SET AND GET METHODS
void Student::setStudentName(string studentName) {
	m_studentName = studentName;
}

string Student::getStudentName() const {
	return m_studentName;
}

void Student::setStudentID(int studentID) {
	m_studentID = studentID;
}

int Student::getStudentID() const {
	return m_studentID;
}


// PRINT METHOD
void Student::print()const {
	cout << "Student Name: " << getStudentName() << endl;
	cout << "Student ID: " << getStudentID() << endl;

	cout << "Enrolled Courses: " << endl;
	for (int i = 0; i < m_numOfferedCourses; i++) {

		if (m_arrayCourse[i] != nullptr) {
			m_arrayCourse[i]->print();
		}
	}
}
