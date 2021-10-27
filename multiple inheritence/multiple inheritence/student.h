#include<string>
using namespace std;
class student
{
private:
	string department;
	string researchInterest;
	string name;
public:
	student():department("unknown") , researchInterest("unknown"){}
	student(string d,string ri) :department(d), researchInterest(ri) {}
	void setDepartment(string d);
	void setResearchInterest(string ri);
	void setName(string m);
	string getDepartment();
	string getResearchInterest();
	string getName();
	void display();
};

