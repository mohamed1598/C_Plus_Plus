#pragma once
#include "person.h"
class student : public person
{
private:
	string depart;
	int level;
	float gpa;
public:
	student(string n, float a, string g, int l, float gp, string d) :person(n, a, g)
	{
		level = l;
		gpa = gp;
		depart = d;
	}
	void setLevel(int l);
	void setGba(float g);
	void setDepart(string d);
	int getLevel();
	float getGpa();
	string getDepart();
	void display();

};

