#include "person.h"

person::person()
{
	name = "unknown";
	age = 0;
	gender = "unknown";
}

person::person(string n, float a, string g)
{
	name = n;
	age = a;
	gender = g;
}

void person::setAge(float a)
{
	age = a;
}

float person::getAge()
{
	return age;
}

void person::setName(string n)
{
	name = n;
}

string person::getName()
{
	return name;
}

void person::setGender(string g)
{
	gender = g;
}

string person::getGender()
{
	return gender;
}

void person::display()
{
	cout << "name= " <<name<< " gender= " << gender <<" age= " <<age<< endl;
}
