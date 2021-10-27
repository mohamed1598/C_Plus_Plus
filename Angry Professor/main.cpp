#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,temp;
        int count1=0;
        cin>>n>>k;
        for(int j=0;j<n;j++)
        {
            cin>>temp;
            if(temp<=0)count1++;
        }
        if(count1>=k)cout<<"NO";
        else cout<<"YES";
        if(i!=t-1)cout<<endl;
    }
    return 0;
}
