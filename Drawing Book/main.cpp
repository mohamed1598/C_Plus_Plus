#include <iostream>

using namespace std;

int main()
{
    int n ,p ;
    cin>> n >> p ;
    if ( p < float(n)/2 )
    {
        cout << p / 2;
    }
    else
    {
        if ((n%2==0) && (p%2!=1))
        {
            cout << ( n-p )/2 + 1 ;
        }
        else
        {
            cout << ( n-p )/2 ;
        }
    }
    return 0;
}
