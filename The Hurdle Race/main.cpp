#include <iostream>

using namespace std;

int main()
{
    int n,k , temp;
    int max1=0;
    cin>>n>>k;
    for(int i=0 ;i<n ;i++)
    {
        cin>>temp;
        if(temp>k) max1=max(max1,temp-k);
    }
    cout<<max1;
    return 0;
}
