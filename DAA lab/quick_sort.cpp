#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pindex = s;

    for (int i = s; i < e; i++)
    {
        if(arr[i]<pivot)
        {
            int temp = arr[i];
            arr[i]= arr[pindex]; 
            arr[pindex]= temp;
            pindex ++;
        }
    }
    int temp= arr[e];
    arr[e]= arr[pindex];
    arr[pindex]=temp;
    
    return pindex;

}

void quickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quickSort(arr, s, (p - 1));
        quickSort(arr, (p + 1), e);
    }
}

int main()
{
    int myarr[] = {10, 50, 89, 32, 12, 11};
    int n = 6;
    cout << "Before sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << myarr[i] << " ";
    }
    cout << endl;

    quickSort(myarr, 0, n - 1);
    cout << endl
         << "After sorting" << endl;
    for (int i = 0; i < n; i++)

    {
        cout << myarr[i] << " ";
    }
    return 0;
}