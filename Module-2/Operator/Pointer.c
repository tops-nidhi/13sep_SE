// Pointer is use to store the reference of the other variable
#include<stdio.h>
int main()
{
    int a = 100;
    int *ptr = &a;
    printf("Address of a : %d\n",ptr);
    printf("Value of a : %d\n",*ptr);
    *ptr = 13;
    printf("After change value of a : %d\n",a);
    ptr++;
    printf("After increment address of a : %d\n",ptr);
    return 0;
}