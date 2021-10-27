#include <iostream>

using namespace std;

int main()
{
    int t , temp;
    cin>>t;
    int* arr=new int[t];
    int arr2[61]={};
    for(int i=0;i<t;i++) cin>>arr[i];
    for(int i=0;i<61;i++)
    {
        if(i==0)temp=1;
        else if(i%2==0) temp=temp+1;
        else temp=temp*2;
        arr2[i]=temp;
    }
    for(int i=0;i<t;i++)
    {
        cout<<arr2[arr[i]];
        if(i!=t-1)cout<<endl;
    }

    return 0;
}
