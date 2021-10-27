#include "student.h"
#include<iostream>
using namespace std;
void student::setDepartment(string d)
{
	department = d;
}

void student::setResearchInterest(string ri)
{
	researchInterest = ri;
}

void student::setName(string m)
{
	name = m;
}

string student::getDepartment()
{
	return department;
}

string student::getResearchInterest()
{
	return researchInterest ;
}

string student::getName()
{
	return name;
}

void student::display()
{
	cout << "name : " << name << " , department : " << department << " , research interest : " << researchInterest << endl;
}
