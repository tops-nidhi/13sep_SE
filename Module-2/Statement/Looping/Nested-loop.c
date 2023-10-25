#include<stdio.h>
int main()
{
    int i, j;
    for( i = 0; i < 5; i++) //outer loop is used for row
    {
        for(j = 0; j < 5; j++) // inner loop is used for the column
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}