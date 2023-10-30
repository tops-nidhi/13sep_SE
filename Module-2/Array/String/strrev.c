// WAP to print the reverse string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%s", &str);
    strrev(str);
    printf("\nReverse of the entered string is : %s\n", str);
}