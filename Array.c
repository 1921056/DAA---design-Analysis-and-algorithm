#include <stdio.h>
int main()
{
    int marks[2][4] = {{56, 5, 45, 85}, {66, 65, 76, 86}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 4; j++)
        {
            printf("%d[%d]elements of array is %d \n ", i, j, marks[i][j]);
        }
    }

}
