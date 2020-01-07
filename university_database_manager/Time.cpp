#include "Time.h"

// CONSTRUCTORS AND DESTRUCTORS
Time::Time() : m_hour(0), m_day(0) {
}

Time::Time(int hour, int day) : m_hour(hour), m_day(day) {
}


// SET AND GET METHODS
void Time::setHour(int hour) {

	if (hour >= 0 && hour <= 24) {
		m_hour = hour;
	}
}

int Time::getHour() const {

	return m_hour;
}

void Time::setDay(int day) {

	if (day >= 1 && day <= 31) {
		m_day = day;
	}
}

int Time::getDay() const {

	return m_day;
}


// OTHER MEMBER METHODS

// Overload the equality operator to test if two Time objects are same. 
bool Time::operator==(Time& time) {

	return ((m_hour == time.getHour()) && (m_day == time.getDay()));

}

// Overload the insertion operator to output hour and day data member values. 
ostream& operator<<(ostream& os, Time& time) {

	os << time.getHour() << "/" << time.getDay();
	return os;
}