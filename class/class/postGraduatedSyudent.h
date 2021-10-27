#pragma once
#include "student.h"
class postGraduatedStudent : public student
{
private:
	string researchInterest;
public:
	postGraduatedStudent(string n, float a, string g, int l, float gp, string d, string ri) :student(n, a, g, l, gp, d)
	{
		researchInterest = ri;
	}
	void setResearchInterest(string s);
	string getResearchInterest();
	void display();
};

