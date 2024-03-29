/* C867_RyanGibney.cpp
   Scripting and Programming - Applications C867
   Ryan Gibney
   Student ID# 000959117
*/

#pragma once
#ifndef roster_h
#define roster_h

#include <stdio.h>
#include <string>
#include "./student.h"

using namespace std;

class Roster {
public:
	Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
	void add(string studentID, string firstName, string lastName,
		string emailAddress, int age, int daysInCourse1,
		int daysInCourse2, int daysInCourse3, Degree degree);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);

	~Roster();
};

#endif /* roster_h */
