#include <iostream>

using namespace std;

int main()
{
    int n;
    int max1=0;
    int max2=0;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<n ;i++)
    {
        int cont=0;
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]-arr[j]==1)||(arr[i]-arr[j]==0))
            {
                cont+=1;
            }
        }
        cont+=1;
        if (cont >max1){max1=cont;}
    }
    for(int i=0 ; i<n ;i++)
    {
        int cont=0;
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]-arr[j]==-1)||(arr[i]-arr[j]==0))
            {
                cont+=1;
            }
        }
        cont+=1;
        if (cont >max2){max2=cont;}
    }
    cout<< max(max1,max2);
    return 0;
}
