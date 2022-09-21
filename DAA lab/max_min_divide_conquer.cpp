#include <iostream>
using namespace std;
int max_min(int arr[], int l, int r)
{
    int m;
    for (int i = 0; i < 5; i++)
    {
        if (l < r)
        {
            m = (l + r) / 2;  
        }
          max_min(arr,l,m);
           m = (l + m) / 2; 

    }
     cout << arr[m]<<" ";
}

int main()
{
    int myarray[5];

    int arr_size = 5;

    cout << "Enter 5 integers in any order: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarray[i];
    }

    max_min(myarray, 0, (arr_size - 1));
}