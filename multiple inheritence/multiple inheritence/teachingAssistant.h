#pragma once
#include "employee.h"
#include "student.h"
class teachingAssistant :public employee , public student
{
public:
	teachingAssistant(string n, string j, float s, string d, string ri) :employee(n, j, s), student(d, ri)
	{

	}
	void display();
};

