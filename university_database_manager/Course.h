#pragma once
#include <iostream>
using namespace std;
#include <string>

// Definition of the Course class. Each object of the Course class stores name and 
// the number of a course. 
class Course
{
private:
	string m_courseNumber;
	string m_courseName;

public:
	// In the constructor, the parameters are used to initialize courseNumber, courseName.
	Course();
	Course(string courseNumber, string courseName);
	~Course();

	void setCourseNumber(string courseNumber);
	string getCourseNumber() const;

	void setCourseName(string courseName);
	string getCourseName() const;

	// parameters for course number and name.
	virtual void print(); // prints data member values 
};

