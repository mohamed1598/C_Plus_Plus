# include<string>
#include<iostream>
using namespace std;
class person
{
private:
	string name;
	float age;
	string gender;
public:
	person();
	person(string n, float a, string g);
	void setAge(float a);
	float getAge();
	void setName(string n);
	string getName();
	void setGender(string g);
	string getGender();
	void display();
};

