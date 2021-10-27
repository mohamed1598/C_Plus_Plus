#include <iostream>

using namespace std;

int main()
{
    int n , k , b;
    int sum =0 ;
    int arr[10^6]={0};
    cin>>n >> k ;
    for (int i=0 ; i< n ; i++)
    {
        cin >> arr[i];
        if (i!=k) sum+=arr[i];
    }
    cin>>b;
    if ((b-sum/2)==0) cout<<"Bon Appetit";
    else { cout << b-sum /2;}

    return 0;
}
