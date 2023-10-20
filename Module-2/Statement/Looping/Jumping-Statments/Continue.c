// WAP to print the even value
#include<stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if(i % 2 != 0){
            continue;
        }
        printf("\n%d", i);
    }
    
}