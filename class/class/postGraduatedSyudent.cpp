#include "postGraduatedSyudent.h"

void postGraduatedStudent::setResearchInterest(string s)
{
	researchInterest = s;
}

string postGraduatedStudent::getResearchInterest()
{
	return researchInterest;
}

void postGraduatedStudent::display()
{
	student::display();
	cout << "research interest : " << researchInterest << endl;
}
