#pragma once
#include "Course.h"
#include <iostream>
using namespace std;

// Definition of Grade class. Each object of the Grade class stores a letter grade 
// for the given course. 
class Grade
{
private:
	Course m_course;
	string m_grade; // course grades are A,B, C, D, F and I (I is the grade for currently enrolled courses)

public:
	Grade(Course course, string grade);

	void setCourse(Course course);
	Course getCourse() const;

	void setGrade(string grade);
	string getGrade() const;

	// Overload the insertion operator to output the data members of a Grade object. 
	friend ostream& operator<<(ostream& os, Grade& grade);
};

