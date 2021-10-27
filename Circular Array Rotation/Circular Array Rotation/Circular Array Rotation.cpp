
#include <iostream>
using namespace std;
void swap(int ar[], int ar1[], int n, int k)
{
    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        ar1[j] = ar[i];
        j++;
    }
    for (int i =0; i < n-k; i++)
    {
        ar1[j] = ar[i];
        j++;
    }

}
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int* ar = new int[n];
    int* ar1 = new int[n];
    int* arr = new int[q];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> arr[i];
    }
    k %= n;
    swap(ar,ar1,n,k);
    for (int i = 0; i < q-1; i++)
    {
        cout<< ar1[arr[i]]<<endl;
    }
    cout << ar1[arr[q - 1]] ;
}
