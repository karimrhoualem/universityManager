#include "CourseSchedule.h"

// CONSTRUCTORS AND DESTRUCTORS
CourseSchedule::CourseSchedule(Course course, string coursePrerequisite, Time time1, Time time2) {

	m_course = course;
	m_coursePrerequisite = coursePrerequisite;
	m_time1 = time1;
	m_time2 = time2;
}

CourseSchedule::~CourseSchedule() {
}


// SET AND GET METHODS
void CourseSchedule::setCourse(Course course) {
	m_course = course;
}

Course CourseSchedule::getCourse() const {
	return m_course;
}

void CourseSchedule::setCoursePrerequisite(string coursePrerequisite) {
	m_coursePrerequisite = coursePrerequisite;
}

string CourseSchedule::getCoursePrerequisite() const {
	return m_coursePrerequisite;
}

void CourseSchedule::setTime1(Time time1) {
	m_time1 = time1;
}

Time CourseSchedule::getTime1() const {
	return m_time1;
}

void CourseSchedule::setTime2(Time time2) {
	m_time2 = time2;
}

Time CourseSchedule::getTime2() const {
	return m_time2;
}


// PRINT METHOD
void CourseSchedule::print() {
	getCourse().print();
	cout << "Course Prerequisite: " << getCoursePrerequisite() << endl;
	cout << m_time1 << endl;
	cout << m_time2 << endl;
}
