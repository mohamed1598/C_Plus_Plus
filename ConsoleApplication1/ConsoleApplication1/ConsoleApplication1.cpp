
#include <iostream>
using namespace std;
#include"employee.h"
#include"engineer.h"
#include"sales.h"
int main()
{
	employee* empptr;
	sales s1("ali", 54, 4000, 5000, 0.10);
	engineer e1("mohamed", 66, 7000, "software engineer", 5, 10, 50);
	empptr = &e1;
	empptr->print();
	empptr = &s1;
	empptr->print();
}

