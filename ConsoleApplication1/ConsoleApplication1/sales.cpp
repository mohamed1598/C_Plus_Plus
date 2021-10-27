#include "sales.h"
sales::sales(string n, int id, float s, float g, float c) :employee(n, id, s)
{
	grossSales = g;
	commisionRate = c;
}

float sales::getTotalSalary()
{
	return salary+grossSales*commisionRate ;
}

void sales::print()
{
	employee::print();
	cout << "gross sales = " << grossSales << " , commision rate = " << commisionRate << " , total salary = " << getTotalSalary() << endl;
}
