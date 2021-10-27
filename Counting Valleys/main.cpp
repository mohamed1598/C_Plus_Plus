#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    int cont=0;
    int p=0 ;
    for (int i =0;i<n;i++)
    {

        if (s[i]=='U')cont++;
        if (s[i]=='D')
        {
            if(cont==0) p++;
            cont--;
        }

    }
    cout<<p;
    return 0;
}
