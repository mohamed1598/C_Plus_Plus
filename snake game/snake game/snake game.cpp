
#include <iostream>
#include"snake.h"
using namespace std;
int main()
{
    char c='a';
    snake s;
    s.setNo(5);
    while (c != 'e')
    {
        cin >> c;
        s.setSpace(c);
        s.draw();
    }
    
}
