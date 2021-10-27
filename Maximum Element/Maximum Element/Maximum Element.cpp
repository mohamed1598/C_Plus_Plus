
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> s;
    int t;
    stack <int> max1;
    max1.push(0);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cin >> x;
            if (x >= max1.top())max1.push(x);
            s.push(x);
        }
        if (x == 2)
        {
            if (max1.top() == s.top())max1.pop();
            s.pop();
        }
        if (x == 3)
        {
            cout << max1.top() << endl;
        }
    }
}

