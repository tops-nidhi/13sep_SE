// WAP to print pyramid as below
/*
    E E E E E
    D D D D
    C C C
    B B
    A
*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 69; i >= 65; i --)
    {
        for(j = 65; j <= i; j++){
            printf("%c ", i);
            // printf("%d ", (i * (i + 1)) / 2 + j);
        }
        printf("\n");
    }
    return 0;
}