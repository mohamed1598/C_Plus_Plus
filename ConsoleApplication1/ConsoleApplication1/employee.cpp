#include "employee.h"

employee::employee()
{
	name = "unknown";
	empId = 0;
	salary = 0;
}

employee::employee(string n, int id, float s)
{
	name = n;
	empId = id;
	salary = s;
}

void employee::print()
{
	cout << "name= " << name << " , employee id = " << empId << " , basic salary= " << salary << endl;
}
