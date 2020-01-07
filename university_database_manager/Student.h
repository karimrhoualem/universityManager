#pragma once
#include "CourseSchedule.h"
#include "Grade.h"
#include <iostream>
using namespace std;

// Definition of Student class. Each object of this class stores name and id of a student and his course grades and currently enrolled courses. 
class Student
{
private:
	static const int m_numOfferedCourses = 400;
	string m_studentName;

	int m_studentID;

	// The following array stores course scheduling information about all the offered courses.
	CourseSchedule* m_arrayCourse[m_numOfferedCourses];

public:
	Student();
	Student(string studentName, int studentID);
	virtual ~Student();

	void setStudentName(string studentName);
	string getStudentName() const;

	void setStudentID(int studentID);
	int getStudentID() const;

	// checking whether a student has taken or registered to a course. 
	virtual bool checkingCourse(string courseNumber) = 0;

	// add a course grade to a student’s record. 
	virtual bool registeringCourse(Grade courseGrade) = 0;

	// dropping a registered course from a student’s record. 
	virtual bool droppingCourse(string courseNumber) = 0;

	virtual void print()const; // print student name and id.
};

