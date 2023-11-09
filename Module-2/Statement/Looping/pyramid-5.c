#include <stdio.h>
int main()
{
    int i, array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, j;
    printf("The elements of the matrix are:\n");
    for (i = 0; i < 3; i++)
    {
        if(i % 2 == 0)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", array[i][j]);
            }
        }
        else
        {
            for (j = 2; j >= 0; j--)
            {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
}