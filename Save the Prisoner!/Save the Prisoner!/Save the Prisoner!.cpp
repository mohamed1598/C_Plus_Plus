#include <iostream>
using namespace std;
struct s
{
	int n;
	int m;
	int s;
	int res;
};
int main()
{
	int t;
	cin >> t;
	s* arr = new s[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i].n >> arr[i].m >> arr[i].s;
		arr[i].s--; arr[i].m--;
		arr[i].s += arr[i].m;
		arr[i].s %= arr[i].n;
		arr[i].res = ++arr[i].s;
	}
	for (int i = 0; i < t-1; i++)
	{
		cout << arr[i].res << endl;
	}
	cout << arr[t-1].res ;
}
