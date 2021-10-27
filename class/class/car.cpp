#include "car.h"
#include<iostream>
void car:: setMaker(string m)
{
	maker = m;
}
string car::getMaker()
{
	return maker;
}

void car::setModel(int m)
{
	model = m;
}

int car::getModel()
{
	return model;
}

car::car(string m, int mo, string c) :maker(m),model(mo),color(c)
{
}

car::~car()
{
	cout << "good bye";
}
