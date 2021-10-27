#include <iostream>
#include<string>
using namespace std;

int main()
{
    int max1=0;
    int length;
    int arr[26];
    for(int i=0;i<26;i++)cin>>arr[i];
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        switch (s[i])
        {
            case 'a': max1=max(max1,arr[0]);break;
            case 'b': max1=max(max1,arr[1]);break;
            case 'c': max1=max(max1,arr[2]);break;
            case 'd': max1=max(max1,arr[3]);break;
            case 'e': max1=max(max1,arr[4]);break;
            case 'f': max1=max(max1,arr[5]);break;
            case 'g': max1=max(max1,arr[6]);break;
            case 'h': max1=max(max1,arr[7]);break;
            case 'i': max1=max(max1,arr[8]);break;
            case 'j': max1=max(max1,arr[9]);break;
            case 'k': max1=max(max1,arr[10]);break;
            case 'l': max1=max(max1,arr[11]);break;
            case 'm': max1=max(max1,arr[12]);break;
            case 'n': max1=max(max1,arr[13]);break;
            case 'o': max1=max(max1,arr[14]);break;
            case 'p': max1=max(max1,arr[15]);break;
            case 'q': max1=max(max1,arr[16]);break;
            case 'r': max1=max(max1,arr[17]);break;
            case 's': max1=max(max1,arr[18]);break;
            case 't': max1=max(max1,arr[19]);break;
            case 'u': max1=max(max1,arr[20]);break;
            case 'v': max1=max(max1,arr[21]);break;
            case 'w': max1=max(max1,arr[22]);break;
            case 'x': max1=max(max1,arr[23]);break;
            case 'y': max1=max(max1,arr[24]);break;
            case 'z': max1=max(max1,arr[25]);break;
        }
        length=i+1;
    }
    cout<<length*max1;


    return 0;
}
