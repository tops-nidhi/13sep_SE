#include<stdio.h>
int* pointer(int *ptr)   //call by reference
{
    return ptr;
}
int main()
{
    int a = 10;
    printf("%d", pointer(&a));
    return 0;
}