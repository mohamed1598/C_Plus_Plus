#include<string>
using namespace std;
class employee
{
private:
	string name;
	string job;
	float salary;
public:
	employee():name("unknown"),job("unknown"), salary(0)
	{}
	employee(string n,string j,float s) :name(n),job(j),salary(s)
	{}
	void setSalary(float s);
	void setName(string n);
	void setJob(string j);
	float getSalary();
	string getName();
	string getJob();
	void display();
};

