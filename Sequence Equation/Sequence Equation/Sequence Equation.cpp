#include <iostream>
using namespace std;
void find(int ar[],int n,int res[],int arr[])
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == ar[j])
			{
				res[i] = j+1;
			}
		}
	}
}
int main()
{
	int n;
	int x = 1;
	cin >> n;
	int* ar = new int[n];
	int* arr = new int[n];
	int* res = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		arr[i] = x;
		x++;
	}
	find(ar,n,res,arr);
	find(ar ,n,arr ,res);
	for (int i = 0; i < n-1; i++)
	{
		cout<< arr[i]<<endl;
	}
	cout << arr[n - 1];

}
