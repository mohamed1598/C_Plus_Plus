#include "employee.h"
#include<iostream>
using namespace std;
void employee::setSalary(float s)
{
	salary = s;
}

void employee::setName(string n)
{
	name = n;
}

void employee::setJob(string j)
{
	job = j;
}

float employee::getSalary()
{
	return salary;
}

string employee::getName()
{
	return name;
}

string employee::getJob()
{
	return job;
}

void employee::display()
{
	cout << "name : " << name << " , job : " << job << " , salary : " << salary << endl;
}
