// search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
int binarySearch(int arr[], int  l, int h, int  key)
{
    int m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (arr[m] == key) return m;
        if (arr[m] > key) h = m - l;
        else l = m + 1;
    }
    return -1;
}
int main()
{
    int arr[] = { 90,10,40,70,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "enter an integer :";
    cin >> num;
   // int result = linearSearch(arr, n, num);
    int result = binarySearch(arr, 0, n - 1, num);
    if (result == -1) cout << "the number : (" << num << ") was not found" << endl;
    else
        cout << "the number : (" << num << ") was found at index : " << result << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
