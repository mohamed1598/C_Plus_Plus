#include "student.h"


void student::setLevel(int l)
{
	level = l;
}

void student::setGba(float g)
{
	gpa = g;
}

void student::setDepart(string d)
{
	depart = d;
}

int student::getLevel()
{
	return level;
}

float student::getGpa()
{
	return gpa;
}

string student::getDepart()
{
	return depart;
}

void student::display()
{
	person::display();
	cout << "level= " << level << " gpa= " << gpa << " depart= " << depart << endl;
}
