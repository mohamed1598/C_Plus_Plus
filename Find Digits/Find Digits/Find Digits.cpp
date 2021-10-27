#include <iostream>
#include <cmath>
using namespace std;
int split(int x,int arr[])
{
    int temp,l;
    for (int m = 0; m < 10; m++)
    {
        temp = x / (pow(10, m));
        if (temp == 0) { l = m; m = 10; }
    }
    for (int m = 0; m < l; m++)
    {
        temp = x / 10;
        arr[m] = x - temp * 10;
        x = x / 10;
    }
    return l;
}
int main()
{
    int t,l;
    cin >> t;
    int* ar = new int[t];
    int* arr = new int[t];
    int* res = new int[t];
    for (int i = 0; i < t; i++)
    {
        int count1 = 0;
        cin >> ar[i];
        l = split(ar[i], arr);
        for (int j = 0; j < l; j++)
        {
            if (arr[j] == 0) continue;
            if (ar[i] % arr[j] == 0)count1++;
        }
        res[i] = count1;
    }
    for (int i = 0; i < t-1; i++)
    {
        cout << res[i] << endl;
    }
    cout << res[t - 1] ;
}
