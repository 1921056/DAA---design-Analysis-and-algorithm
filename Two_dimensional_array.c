#include <stdio.h>
int main()
{
    int i, j;
    int kishan[2][4];
    // printf("%d %d elements of array is %d \n ", i, j, marks[i][j]);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the value of [%d] | [%d]  element of array :", i, j);
            scanf("%d", &kishan[i][j]);
        }
    }

    printf("* 1  2  3  4\n");

    for (i = 0; i < 2; i++)
    {
        printf("0");
        for (j = 0; j < 4; j++)
        {
            printf(" %d ", kishan[i][j]);
        }
        printf("\n");
    }
}
