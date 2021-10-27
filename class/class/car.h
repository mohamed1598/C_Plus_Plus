#include<string>
using namespace std;
class car
{
private :
	string maker;
	int model;
	string color;
public:
	void setMaker(string m);
	string getMaker();
	void setModel(int m);
	int getModel();
	car(string m, int mo,string c);
	~car();
};

