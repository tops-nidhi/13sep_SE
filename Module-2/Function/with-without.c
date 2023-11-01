#include<stdio.h>
int a, b;
int get(){
    printf("Enter the value of the a and b: ");
    scanf("%d%d", &a, &b);
    return a*b;
}
int main()
{
    printf("%d", get());
    return 0;
}