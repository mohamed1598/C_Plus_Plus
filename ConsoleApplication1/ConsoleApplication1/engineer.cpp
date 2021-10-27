#include "engineer.h"

engineer::engineer(string n, int id, float s, string sp, int e, int o, float otr):employee(n,id,s)
{
	speciality = sp;
	experience = e;
	overtimeHours = o;
	overtimeHoursRate = otr;
}

float engineer::getTotalSalary()
{
	return salary+overtimeHours*overtimeHoursRate;
}

void engineer::print()
{
	employee::print();
	cout << "speciality = " << speciality << " , experience = " << experience << " , over time hours = " << overtimeHours << " , over time hours rate = " << overtimeHoursRate << endl;
}
