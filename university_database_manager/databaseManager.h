#pragma once
#include "Student.h"
#include "CourseRegistration.h"
#include <iostream>
using namespace std;

class databaseManager
{
private:
	static const int m_maxNumStudents = 5000;
	static const int m_numOfferedCourses = 400;
	int m_numStudentsEnrolled; //number of the students at the university 

	// The following array stores information about the students. 
	Student* m_arrayStudent[m_maxNumStudents];

	// The following array stores course registration information about all the offered courses.
	CourseRegistration* m_arrayCourse[m_numOfferedCourses];

public:
	databaseManager();

	// insert function adds a new student to the array-student. 
	bool insertStudent(Student* student);

	// delete function removes a student from the array_student with the given student id number. 
	bool deleteStudent(int studentID);

	// Register a student with the given student-id parameter to the course with the given Grade object. 
	bool registeringCourse(int studentID, Grade courseGrade);

	// Remove registration of a student with the given student-id parameter and the course number
	bool droppingCourse(int studentID, string courseNumber);

	// print name, student-id and student record of a student with the given student-id. 
	virtual void print(int studentID);

	// print student ids of all the students taking a course with the given course number.
	virtual void print(string courseNumber);
};

