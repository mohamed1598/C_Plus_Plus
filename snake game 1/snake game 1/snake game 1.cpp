#include <iostream>
#include<conio.h>
#include<Windows.h>
#include<dos.h>
#include<time.h>
using namespace std;
#define maxSnakeSize 100
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoxy(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
class point
{
private:
    int x;
    int y;
public:
    point():x(10), y(10)
    { }
    point(int x1,int y1) :x(x1), y(y1)
    { }
    void setPoint(int x1, int y1) 
    {
        x = x1;
        y = y1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void moveUp()
    {
        y--;
    }
    void moveDown()
    {
        y++;
    }
    void moveRight()
    {
        x++;
    }
    void moveLeft()
    {
        x--;
    }
    void draw()
    {
        gotoxy(x, y);
        cout << "*";
    }
    void erase()
    {
        gotoxy(x, y);
        cout << " ";
    }
    void debug()
    {
        cout << "(" << x << "," << y << ")";
    }
    void copyPos(point* p)
    {
        p->x = x;
        p->y = y;
    }
};
class snake
{
private:
    point* cell[maxSnakeSize];
    int size;
    char dir;
    point fruit;
public:
    snake()
    {
        size = 1;
        cell[0] = new point(20, 20);
        fruit.setPoint(rand() % 50, rand() % 25);
        for (int i = 1; i < maxSnakeSize; i++)
        {
            cell[i] = NULL;
        }
    }
    void addCell(int x, int y)
    {
        cell[size++] = new point(x, y);

    }
    void turnUp()
    {
        dir = 'w';
    }
    void turnDown()
    {
        dir = 's';
    }
    void turnRight()
    {
        dir = 'd';
    }
    void turnLeft()
    {
        dir = 'a';
    }
    void move()
    {
        system("cls");//cleaR the screen
        for (int i = size - 1; i > 0; i--)
        {
            cell[i-1]->copyPos(cell[i]);
        }
        switch (dir)
        {
        case 'w':
            cell[0]->moveUp();
            break;
        case 's':
            cell[0]->moveDown();
            break;
        case 'd':
            cell[0]->moveRight();
            break;
        case 'a':
            cell[0]->moveLeft();
            break;
        }
        if (fruit.getX() == cell[0]->getX() && fruit.getY() == cell[0]->getY())
        {
            addCell(0, 0);
            fruit.setPoint(rand() % 50, rand() % 25);
        }
        for (int i = 0; i < size; i++)
        {
            cell[i]->draw();
            fruit.draw();
            Sleep(100);
        }
    }
    void debug()
    {
        for (int i = 0; i < size; i++)
        {
            cell[i]->debug();
        }
    }
};
int main()
{
    srand((unsigned)time(NULL));
    snake snake;
    char op = 'l';
    do
    {

        if (_kbhit())
        {
            op = _getch();
        }
        switch (op)
        {
        case 'w':
        case 'W':
            snake.turnUp();
            break;
        case 's':
        case 'S':
            snake.turnDown();
            break;
        case 'd':
        case 'D':
            snake.turnRight();
            break;
        case 'a':
        case 'A':
            snake.turnLeft();
            break;
        }
        snake.move();
    } while (op != 'e');
    
}

