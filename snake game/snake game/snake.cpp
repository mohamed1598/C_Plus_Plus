#include "snake.h"

int snake::getNo()
{
    return no;
}

void snake::setNo(int n)
{
    no = n;
}

void snake::setSpace(char c)
{
    if(c=='d')
    {
        space++;
    }
}

void snake::draw()
{

    for (int i = 0; i < space; i++) { cout << " "; }
    for (int i = 0; i < no; i++)
    {
        cout << 'x';
    }
}
