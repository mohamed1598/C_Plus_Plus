#include <iostream>

using namespace std;

int main()
{
    int n ;
    int cont =0 ;
    cin >> n;
    int* ar = new int[n];
    for (int i=0 ; i < n ; i++)
    {
        cin>>ar[i];
    }
    for (int i=0 ; i < n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
           if ((ar[i]== ar[j])&&(ar[i]!=0))
            {
               cont+=1;
               ar[j]=0;
               j=n;
            }
        }
    }
    cout << cont ;
    return 0;
}
