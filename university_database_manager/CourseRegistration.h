#pragma once
#include "Course.h"
#include <iostream>
using namespace std;

// Class CourseRegistration inherits from the Course class. Each object of this class stores 
// the student-ids of the students registered to a course.
class CourseRegistration : public Course 
{
private: 
	static const int m_classSize = 60; 
	int m_registeredToCourse[m_classSize] = {0}; // this array stores the student-ids of the students registered to this course.
	int m_numRegisteredStudents = 0;

public: 
	CourseRegistration(Course course);
	
	void setNumRegisteredStudents(int numRegisteredStudents);
	int getNumRegisteredStudents() const;

	int getRegisteredToCourse(int j) const;

	// Register a student to a course 
	bool registeringCourse(int studentID);
	
	// Drop a student registered to a course. 
	bool droppingCourse(int studentID);
	
	virtual void print(); // prints course name and number and the student-id of registered students.
};

