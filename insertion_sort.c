#include <stdio.h>
void main()
{
    int temp, j, i,n;
     printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elememts of array  :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (i >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j +1] = temp;
    }
    
    printf("Array elements :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
                                                 
}