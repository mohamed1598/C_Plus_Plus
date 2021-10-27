
#include "employee.h"
class sales : public employee
{
private:
	float grossSales;
	float commisionRate;
public:
	sales(string n, int id, float s, float g, float c) ;
	float getTotalSalary();
	void print();
	
};

