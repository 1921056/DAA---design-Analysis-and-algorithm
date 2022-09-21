#include <iostream>
using namespace std;


int main(){
    int a[5]={ 5,6,80,90,10};
    cout<<"The elements of array are : ";
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    int max,min;
    max=a[0];
    for (int i = 0; i < 5; i++)
    {
        if(a[i] > max )
        {
            max=a[i];
        }
       
    }
    min=a[0];
    for (int i = 0; i < 5; i++)
    {
        if(a[i] < min )
        {
            min=a[i];
        }
       
    }
     cout<<endl<<"The maximum value in this array is "<<max << " and min is "<<min;
    
}