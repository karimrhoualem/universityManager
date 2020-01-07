#pragma once
#include "Student.h"
#include "Grade.h"
#include <iostream>
using namespace std;

class UndergraduateStudent : public Student
{
private:
	static const int m_maxNumCourses = 40;
	Grade* m_studentRecord[m_maxNumCourses];

public:
	UndergraduateStudent();
	UndergraduateStudent(string studentName, int studentID);
	~UndergraduateStudent();

	// checking whether a student has taken or registered to a course. 
	virtual bool checkingCourse(string courseNumber);

	// add a course grade to a student’s record. 
	virtual bool registeringCourse(Grade courseGrade);

	// dropping a registered course from a student’s record. 
	virtual bool droppingCourse(string courseNumber);

	virtual void print() const; // print student name, student-id and student record. 
};

