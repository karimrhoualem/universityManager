#include "databaseManager.h"

databaseManager::databaseManager() : m_numStudentsEnrolled(0)
{

	for (int i = 0; i < m_maxNumStudents; i++) {
		m_arrayStudent[i] = nullptr;
	}

	for (int j = 0; j < m_numOfferedCourses; j++) {
		m_arrayCourse[j] = nullptr;
	}
}

// insert function adds a new student to the array-student. 
bool databaseManager::insertStudent(Student* student) {

	for (int i = 0; i < m_maxNumStudents; i++) {

		if (m_arrayStudent[i] == nullptr) {
			m_arrayStudent[i] = student;
			m_numStudentsEnrolled++;
			return true;
		}
	}

	cout << "The max number of students has been reached. Could not add student." << endl;
	return false;
}

// delete function removes a student from the array_student with the given student id number. 
bool databaseManager::deleteStudent(int studentID) {

	for (int i = 0; i < m_maxNumStudents; i++) {

		if (m_arrayStudent[i]->getStudentID() == studentID) {
			delete m_arrayStudent[i];
			m_arrayStudent[i] = nullptr;
			m_numStudentsEnrolled--;
			return true;
		}
	}

	cout << "Could not find student. Student has not been deleted." << endl;
	return false;
}

// Register a student with the given student-id parameter to the course with the given Grade object. 
// Here we are assuming that the students in this array are created polymorphically as undergraduate or graduate students.
// This will allow us to access the studentRecord arrays in the UndergraduateStudent and GraduateStudent classes.
bool databaseManager::registeringCourse(int studentID, Grade courseGrade) {

	for (int i = 0; i < m_numOfferedCourses; i++) {

		if (m_arrayStudent[i]->getStudentID() == studentID) {

			m_arrayStudent[i]->registeringCourse(courseGrade);
			return true;
		}
	}

	cout << "Could not register student to course." << endl;
	return false;
}

// Remove registration of a student with the given student-id parameter and the course number
bool databaseManager::droppingCourse(int studentID, string courseNumber) {

	for (int i = 0; i < m_numOfferedCourses; i++) {

		if (m_arrayCourse[i]->getCourseNumber() == courseNumber) {

			for (int j = 0; j < m_arrayCourse[i]->getNumRegisteredStudents(); j++) {

				if (m_arrayCourse[i]->getRegisteredToCourse(j) == studentID) {

					m_arrayCourse[i]->droppingCourse(studentID);
					return true;
				}
			}
		}
	}

	cout << "Student could not be dropped from course." << endl;
	return false;
}

// print name, student-id and student record of a student with the given student-id. 
void databaseManager::print(int studentID)
{
	for (int i = 0; i < m_maxNumStudents; i++)
	{
		if (studentID == m_arrayStudent[i]->getStudentID())
			m_arrayStudent[i]->print();
	}
}

// print student ids of all the students taking a course with the given course number.
void databaseManager::print(string courseNumber) {

}
