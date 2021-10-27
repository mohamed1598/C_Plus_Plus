#include<string>
#include<iostream>
using namespace std;
class employee
{
protected :
	string name;
	int empId;
	float salary;
public:
	employee();
	employee(string n, int id, float s);
	virtual float getTotalSalary() = 0;
	virtual void print();
};

