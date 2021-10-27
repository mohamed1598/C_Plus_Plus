#include<iostream>
using namespace std;
class snake
{
private:
	int no;
	int space=0;
public:
	int getNo();
	void setNo(int n);
	void setSpace(char c);
	void draw();
};

