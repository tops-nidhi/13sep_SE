// WAP to print pyramid as below
/*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 5; i > 0; i --)
    {
        for(j = 1; j <= i; j++){
            printf("%d ", j);
            // printf("%d ", (i * (i + 1)) / 2 + j);
        }
        printf("\n");
    }
    return 0;
}