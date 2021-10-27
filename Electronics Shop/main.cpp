#include <iostream>

using namespace std;

int main()
{
    int b , n ,m ,  temp;
    int max1 = -1;
    int arr1[1001];
    int arr2[1001];
    cin>>b>>n>>m ;
    for(int i=0 ; i<n ;i++)
    {
        cin >> arr1[i];
    }
    for(int j=0 ; j<m ;j++)
    {
        cin >> arr2[j];
    }
    for(int i=0 ;i<n ;i++)
    {
        for(int j=0 ;j<m ;j++)
        {
            if ((arr1[i]+arr2[j]<=b)&&(arr1[i]+arr2[j]>max1)) max1=arr1[i]+arr2[j];
        }
    }
    cout<<max1;


    return 0;
}
