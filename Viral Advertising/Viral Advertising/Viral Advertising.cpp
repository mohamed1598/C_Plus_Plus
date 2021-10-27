#include <iostream>
using namespace std;
struct s
{
    int liked;
    int commulative;
    int day;
};
int main()
{
    s s1;
    s1.liked = 2;
    s1.commulative = 2;
    cin >> s1.day;
    for (int i = 1; i < s1.day; i++)
    {
        s1.liked *= 3;
        s1.liked /= 2;
        s1.commulative += s1.liked;
    }
    cout << s1.commulative;
}

