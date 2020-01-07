#include "CourseRegistration.h"

CourseRegistration::CourseRegistration(Course course) : Course(course) {
}

void CourseRegistration::setNumRegisteredStudents(int numRegisteredStudents) {
	m_numRegisteredStudents = numRegisteredStudents;
}

int CourseRegistration::getNumRegisteredStudents() const {
	return m_numRegisteredStudents;
}

int CourseRegistration::getRegisteredToCourse(int j) const {

	for (int i = 0; i < m_numRegisteredStudents; i++) {

		if (i == j) {
			return m_registeredToCourse[j];
		}
	}
	return 0;
}


// Register a student to a course 
bool CourseRegistration::registeringCourse(int studentID) {

	int i = 0;

	if (m_numRegisteredStudents >= m_classSize) {

		cout << "Maximum class capacity reached. Student could not be added to course." << endl;
		return false;
	}
	else {

		for (; m_registeredToCourse[i] != 0; i++) {

			if (m_registeredToCourse[i] == studentID) {

				cout << "Student is already registered in this course." << endl;
				return false;
			}
		}

		m_registeredToCourse[i] = studentID;
		m_numRegisteredStudents++;
		return true;
	}
}

// Drop a student registered to a course. 
bool CourseRegistration::droppingCourse(int studentID) {

	int i = 0;

	for (; m_registeredToCourse[i] != 0; i++) {

		if (m_registeredToCourse[i] == studentID) {

			m_registeredToCourse[i] = 0;
			m_numRegisteredStudents--;
			cout << "Student " << studentID << " has been successfully dropped from course." << endl;
			return true;
		}
	}
	return false;

}

// prints course name and number and the student-id of registered students.
void CourseRegistration::print() {
	Course::print();
	cout << "Number of Registered Students: " << getNumRegisteredStudents() << endl;
	cout << "Registered Students: " << endl;
	for (int i = 0; m_registeredToCourse[i] != 0; i++) {
		cout << "\t" << m_registeredToCourse[i] << endl;
	}
}
