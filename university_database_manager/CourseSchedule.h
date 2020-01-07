#pragma once
#include "Course.h"
#include "Time.h"
#include <iostream>
using namespace std;

// Each course has one pre-requisite course and it has two lectures per week. The lectures 
// start on the hour and lasts 50 minutes. An example course schedule may be: 
// Monday 2.00pm, Wednesday 4.00pm. 
// ***Two courses that start on the same day at the same time will conflict with each other.
class CourseSchedule
{
private:
	Course m_course; // An object of the Course class
	string m_coursePrerequisite; // This is the course number of the pre-requisite course, e.g. "COEN 243"

	Time m_time1; // day and hour of the first lecture
	Time m_time2; // day and hour of the second lecture

public:
	// In the constructor, the parameters are used to initialize Course object, course pre
	// requisite and course weekly schedule.

	CourseSchedule(Course course, string coursePrerequisite, Time time1, Time time2);
	~CourseSchedule();

	void setCourse(Course course);
	Course getCourse() const;

	void setCoursePrerequisite(string coursePrerequisite);
	string getCoursePrerequisite() const;

	void setTime1(Time time1);
	Time getTime1() const;

	void setTime2(Time time2);
	Time getTime2() const;

	virtual void print(); // prints all the data member values.
};

