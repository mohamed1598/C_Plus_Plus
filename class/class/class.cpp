// class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include"car.h"
#include"calculator.h"
#include"student.h"
#include"postGraduatedSyudent.h"
using namespace std;
int main()
{
    postGraduatedStudent s1("mohamed", 22, "male", 12, 3.9, "is","Nano Technology");
    s1.display();
    /*student s1("mohamed", 22, "male", 12, 3.9, "is");
    s1.display();*/
    /*student s1;
    s1.display();
    s1.setAge(22);
    s1.setGender("male");
    s1.setName("mohamed");
    s1.display();*/

    /*car c1("toyota",2020,"black");
    cout<<c1.getMaker()<<endl;
    cout<<c1.getModel();*/
    /*calculator c1;
    cout<<c1.add(2, 3)<<endl;
    cout<<c1.add(2, 3,4)<<endl;
    cout<<c1.add("hello", "world");*/

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
