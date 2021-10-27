#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned temp[3] , a,b;
    int q ;
    cin>>q;
    string* arr = new string[q];
    for(int i=0;i<q;i++)
    {
        cin>>temp[0];
        cin>>temp[1];
        cin>>temp[2];
        if(temp[0]> temp[2])a=temp[0]-temp[2];
        else a=temp[2]-temp[0];
        if(temp[1]> temp[2])b=temp[1]-temp[2];
        else b=temp[2]-temp[1];
        if(a<b)arr[i]="Cat A";
        else if (a>b)arr[i]="Cat B";
        else arr[i]="Mouse C";
    }
    for(int i=0;i<q-1;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<arr[q-1];

    return 0;
}
