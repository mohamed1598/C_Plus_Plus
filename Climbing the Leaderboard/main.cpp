#include <iostream>

using namespace std;

int main()
{
    int n , m ;
    int scores[200000];
    cin>>n;
    for(int i=0 ; i< n;i++)
    {
        cin>>scores[i];
    }
    int alice[200000];
    cin>>m;
    for(int i=0 ; i< m;i++)
    {
        cin>>alice[i];
    }
    for(int i=0 ;i<m;i++)
    {
        int count1=1;
        for(int j=0;j<n;j++)
        {
            if(j!=0) if(scores[j]==scores[j-1])count1--;
            if(alice[i]<scores[j])count1++;
            else j=n;


        }
        cout<<count1<<endl;
    }
    return 0;
}
