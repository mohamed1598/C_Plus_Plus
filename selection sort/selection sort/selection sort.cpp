// selection sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    int minIdx;
    for (int i = 0; i < n - 1; i++)
    {
        minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])minIdx = j;
        }
        swap(arr[minIdx], arr[i]);
    }
}
void bubblesort(int arr[], int n)
{
    
    for (int i = 0; i < n-1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
                
        }
        if (flag == true)
            break;
    }
}
void insertionsort(int arr[], int n)
{
    int key, j;                   //0 1  2  3  4  5  6
    for (int i = 1; i < n; i++)  // 80 90 60 30 50 70 40
    {
        key = arr[i];//90
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void merge(int arr[], int l, int m, int r)//m=l+(r-l)/2
{
    int i, j ,k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int* L = new int[n1], * R = new int [n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i]; i++; k++;
    }
    while (j < n2)
    {
        arr[k] =R[j]; j++; k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

/**/
int partition1(int arr[], int l, int h)
{
    int p = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= p);
        do
        {
            j--;
        } while (arr[j] > p);

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);
    return j;
}

void quickSort1(int arr[], int l, int h)
{

    if (l < h) {
        int piv = partition1(arr, l, h);
        quickSort1(arr, l, piv);
        quickSort1(arr, piv + 1, h);
    }

}



int partition2(int arr[], int iBegin, int jEnd) {
    int i = iBegin;
    int j = jEnd;
    int pivLoc = i;
    while (true)
    {
        while (arr[pivLoc] <= arr[j] && pivLoc != j)
        {
            j--;
        }
        if (pivLoc == j)
            break;
        else if (arr[pivLoc] > arr[j])
        {
            swap(arr[j], arr[pivLoc]);
            pivLoc = j;
        }

        while (arr[pivLoc] >= arr[i] && pivLoc != i)
        {
            i++;
        }
        if (pivLoc == i)
            break;
        else if (arr[pivLoc] < arr[i])
        {
            swap(arr[i], arr[pivLoc]);
            pivLoc = i;
        }
    }
    return pivLoc;
}


void quickSort2(int arr[], int l, int h)
{

    if (l < h) {
        int piv = partition2(arr, l, h);
        quickSort2(arr, l, piv - 1);
        quickSort2(arr, piv + 1, h);
    }

}
/**/
void heapify(int arr[], int n, int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int max = i;
    if (l<n && arr[l]>arr[max])
        max = l;
    if (r<n && arr[r]>arr[max])
        max = r;

    if (max != i) {
        swap(arr[i], arr[max]);
        heapify(arr, n, max);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void heapSort(int arr[], int n)
{

    buildHeap(arr, n);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }

}
/**/


void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = { 60,0,50,30,10,20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //cout << n;
   // selectionsort(arr, n);
    //bubblesort(arr, n);
    //insertionsort(arr, n);
   // mergeSort(arr, 0,n-1);
    quickSort2(arr,0, n-1);
    print(arr, n);
    
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
