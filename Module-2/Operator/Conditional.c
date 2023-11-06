// WAP to find max value using conditional(ternary operator)
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    // (condition) ? (true) : (false)
    (a > b) ? (printf("%d is max number.", a)) : (printf("%d is max number.", b));
    return 0;
}