#include <iostream>
using namespace std;

#include "Time.h"
#include "Course.h"
#include "CourseSchedule.h"
#include "CourseRegistration.h"
#include "UndergraduateStudent.h"
#include "GraduateStudent.h"
#include "Student.h"
#include "databaseManager.h"

int main()
{
	databaseManager* wDataManager = new databaseManager();

	UndergraduateStudent* dilara = new UndergraduateStudent("Dilara", 40030357);
	GraduateStudent* karim = new GraduateStudent("Karim", 2345632);

	if (wDataManager->insertStudent(dilara))
	{
		cout << "Student:";
		wDataManager->print(40030357);
	}

	if (wDataManager->insertStudent(karim))
	{
		cout << "Student:";
		wDataManager->print(2345632);
	}
}
