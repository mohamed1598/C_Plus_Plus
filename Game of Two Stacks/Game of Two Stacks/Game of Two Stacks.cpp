#include <iostream>
#include<stack>
using namespace std;
int main()
{
    int g;
    cin >> g;

    int* res = new int[g];
    for (int i = 0; i < g; i++)
    {
        int sum = 0;
        int n, m, x;
        cin >> n >> m >> x;
        int* ar1 = new int[n];
        int* ar2 = new int[m];
        for (int j = 0; j < n; j++)
        {
            cin >> ar1[j];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> ar2[j];
        }

        res[i] = count;

    }


    for (int i = 0; i < g - 1; i++)
    {
        cout << res[i] << endl;
    }
    cout << res[g - 1];

}
