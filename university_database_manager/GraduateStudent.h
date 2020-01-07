#pragma once
#include "Student.h"
#include "Grade.h"
#include <iostream>
using namespace std;

class GraduateStudent : public Student
{
private:
	static const int m_maxNumGraduateCourses = 12;
	Grade* m_studentRecord[m_maxNumGraduateCourses];

public:
	GraduateStudent();
	GraduateStudent(string studentName, int studentID);
	~GraduateStudent();

	// checking whether a student has taken or registered to a course.
	virtual bool checkingCourse(string courseNumber);

	// add a course grade to a student’s record. 
	virtual bool registeringCourse(Grade courseGrade);

	// dropping a registered course from a student’s record. 
	virtual bool droppingCourse(string courseNumber);

	virtual void print() const; // print student name and student id and student record.
};

