// WAP to print pyramid as below
/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 0; i < 5; i ++)
    {
        for(j = 0; j <= i; j++){
            printf("%d ", j);
            // printf("%d ", (i * (i + 1)) / 2 + j);
        }
        printf("\n");
    }
    return 0;
}