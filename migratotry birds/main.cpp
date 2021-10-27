#include <iostream>

using namespace std;

int main()
{
    int arr[5]={0};
    int size , temp  ;
    int max = 0;
    cin >> size ;
    for(int i=0 ;i<size ; i++ )
    {
        cin>> temp;
        switch (temp)
        {
            case 1 :
                arr[0]++;
                break;
            case 2 :
                arr[1]++;
                break;
            case 3 :
                arr[2]++;
                break;
            case 4 :
                arr[3]++;
                break;
            case 5 :
                arr[4]++;
                break;
        }

    }
    for (int i=0 ; i <5 ; i++)
    {
        if ( arr[0]>= arr[1] && arr[0]>= arr[2] && arr[0]>= arr[3] && arr[0]>= arr[4] ) max= 1 ;
        else if ( arr[1]> arr[0] && arr[1]>= arr[2] && arr[1]>= arr[3] && arr[1]>= arr[4] ) max= 2 ;
        else if ( arr[2]> arr[0] && arr[2]>arr[1] && arr[2]>= arr[3] && arr[2]>= arr[4] ) max= 3 ;
        else if ( arr[3]> arr[0] && arr[3]> arr[2] && arr[3]> arr[1] && arr[3]>= arr[4] ) max= 4 ;
        else {max=5;}
    }
    cout << max ;

    return 0;
}
