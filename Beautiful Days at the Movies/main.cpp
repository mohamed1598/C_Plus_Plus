#include <iostream>
//#include <cmath>
#include<stdlib.h>

int reversen(int i)
{
    int temp ,ri,l;
    int arr[7]={-1};
    for(int m=0;m<10;m++)
    {
        temp=i/(pow(10,m));
        if(temp==0) {l=m;m=10;}
    }
    for(int m=0;m<l;m++)
    {
        temp=i/10;
        arr[m]=i-temp*10;
        i=i/10;
    }
    int n=0;
    ri=0;
    for(int m=l-1;m>=0;m--)
    {
        temp=pow(10,n);
        ri+=arr[m]*temp;
        n++;
    }
    return ri;
}
using namespace std;
int main()
{
    int i,j,k,temp;
    cin>>i>>j>>k;
    int count1=0;
   for(int m=i;m<=j;m++)
    {
        temp=reversen(m);
        if(abs(temp-m)%k==0)count1++;
    }

    cout<<count1;
    return 0;
}
