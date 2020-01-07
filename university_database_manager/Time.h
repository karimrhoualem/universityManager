#pragma once
#include <iostream>
using namespace std;

class Time
{
private:
	int m_hour;
	int m_day;

public:
	Time();
	Time(int hour, int day);

	void setHour(int hour);
	int getHour() const;

	void setDay(int day);
	int getDay() const;

	// Overload the equality operator to test if two Time objects are same. 
	bool operator==(Time& time);

	// Overload the insertion operator to output hour and day data member values. 
	friend ostream& operator<<(ostream& os, Time& time);
};


