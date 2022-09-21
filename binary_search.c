#include <stdio.h>
int main()
{
    int n, element, left, right, mid,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elememts of array in the sorted manner :");
    for ( i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to find : ");
    scanf("%d", &element);

    left = 0;
    right = n - 1;
    mid = (left + right) / 2;
    while (left<=right)
    {
        
        if(a[mid]<element)
        {
            left=mid+1;
        }
        else if (a[mid]=element)
        {
           printf("%d found the location %d",element,(a[i])-1);
           break;
        }
        else{
            right=mid-1;
            mid=(left+right)/2;
        }
        if (left>right)
        {
            printf("%d is not present in the arrray",element);
            return 0;
        }
        
        
    }
    
}