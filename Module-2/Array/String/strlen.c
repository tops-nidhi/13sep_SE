// WAP to count the length of the string using strlen().
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    printf("\nLength of the entered string is: %d", len);
    return 0;
}