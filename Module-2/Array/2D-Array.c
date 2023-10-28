// WAP to print the 3 x 3 matrix
#include <stdio.h>
int main()
{
    // int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int array[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {                           // outer loop row
        for (j = 0; j < 3; j++) // inner loop column
        {
            printf("Enter the value of the array[%d][%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nThe entered Matrix is: \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nValue of the array[%d][%d]:%d", i, j, array[i][j]);
        }
    }
    return 0;
}