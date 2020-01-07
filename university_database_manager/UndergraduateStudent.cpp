#include "UndergraduateStudent.h"

// CONSTRUCTORS AND DESTRUCTORS
UndergraduateStudent::UndergraduateStudent() : Student() {

	// Initialize each pointer to a nullptr
	for (int i = 0; i < m_maxNumCourses; i++) {
		m_studentRecord[i] = nullptr;
	}
}

UndergraduateStudent::UndergraduateStudent(string studentName, int studentID) :
	Student(studentName, studentID) {

	// Initialize each pointer to a nullptr
	for (int i = 0; i < m_maxNumCourses; i++) {
		m_studentRecord[i] = nullptr;
	}
}
UndergraduateStudent::~UndergraduateStudent() {
}


// MEMBER METHODS

// checking whether a student has taken or registered to a course. 
bool UndergraduateStudent::checkingCourse(string courseNumber) {

	for (int i = 0; i < m_maxNumCourses; i++) {

		if (m_studentRecord[i]->getCourse().getCourseNumber() == courseNumber) {
			return true;
		}
	}

	return false;
}

// add a course grade to a student’s record. 
bool UndergraduateStudent::registeringCourse(Grade courseGrade) {

	// Verify if the grade has already been added for the given course.
	// If the previous grade is identical to grade that is trying to be added for that course, return false.
	// If the previous grade was an F, then replace F with new grade and return true;
	for (int i = 0; i < m_maxNumCourses; i++) {

		if (m_studentRecord[i]->getCourse().getCourseName() == courseGrade.getCourse().getCourseName()
			&& m_studentRecord[i]->getGrade() == courseGrade.getGrade()) {

			cout << "This course's grade has already been added to the student record. No changes have been made." << endl;
			return false;
		}
		else if (m_studentRecord[i]->getCourse().getCourseName() == courseGrade.getCourse().getCourseName()
			&& m_studentRecord[i]->getGrade() == "F" && courseGrade.getGrade() != "F") {

			m_studentRecord[i]->setGrade(courseGrade.getGrade());
			return true;
		}
	}

	// If the course grade is a brand new grade that is being added to the student record, add it where the first nullptr appears in the array.
	for (int j = 0; j < m_maxNumCourses; j++) {

		if (m_studentRecord[j] == nullptr) {
			*m_studentRecord[j] = courseGrade;
			return true;
		}
	}

	cout << "Student record is full. Could not add course grade." << endl;
	return false;
}

// dropping a registered course from a student’s record. 
bool UndergraduateStudent::droppingCourse(string courseNumber) {

	for (int i = 0; i < m_maxNumCourses; i++) {

		if (m_studentRecord[i]->getCourse().getCourseNumber() == courseNumber) {

			m_studentRecord[i] = nullptr;
			cout << "Course has been successfull dropped from student record." << endl;
			return true;
		}
	}

	return false;
}


// PRINT METHOD
void UndergraduateStudent::print() const {
	Student::print();

	cout << "Student Record: " << endl;
	for (int i = 0; i < m_maxNumCourses; i++) {

		if (m_studentRecord[i] != nullptr) {

			m_studentRecord[i]->getCourse().print();
			cout << "Grade:" << m_studentRecord[i]->getGrade() << endl;
		}
	}
}
