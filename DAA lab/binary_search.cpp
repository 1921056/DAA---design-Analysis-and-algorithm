#include <iostream>
using namespace std;

int binary_search(int arr[],int left,int right, int x)
{
    while (left<=right)
    {
      int mid=left+(right- left)/2;
      if (arr[mid]==x)
      {
          return mid;
      }
      else if (arr[mid]<x)
      {
         left= mid+1;
      }
      else{
          right= mid -1;
      }
      
    }
    return -1;
    
}

int main()
{
    int num;
    int myarr[10];
    int output;
    int i;

    cout << "Enter  integers values for array in ascending order" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }

    cout<<"Enter number that you want to search in the array :"<<endl;
    cin>>num;

    output= binary_search(myarr,0,5,num);

    if(output== -1){
        cout<<"no match found"<<endl;
    }
    else{
        cout<<"Match found at index position :"<<output<<endl;

    }

    return 0;
}