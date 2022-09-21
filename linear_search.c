#include <stdio.h>
int main()
{
    int a[] = {56, 52, 45, 54, 22};
    printf("%d \n",sizeof(a));
    int element;
    printf("Enter the element to be searched :");
    scanf("%d", &element);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == element)
        {
            return printf("searching successful at index %d",i);
        }
     
    } 
    printf("search failed");
   
   
}
