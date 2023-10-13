// WAP to swap the two value using third variable
#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("\nEnter the second value: ");
    scanf("%d", &b);
    printf("\nBefor value swapping: \nFirst value = %d\nSecond value = %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter value swapping: \nFirst value = %d\nSecond value = %d", a, b);
    return 0;
}
