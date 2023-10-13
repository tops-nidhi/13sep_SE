/*
    +=, -=, *=, /=, %=
    a  = 6; b = 3;
    a += b -> a = a + b
*/
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    b %= b; // a = a % b -> a = 6 % 3 -> a = 0
    printf("Modulo of b and b is %d", b);
    return 0;
}