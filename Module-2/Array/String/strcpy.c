// WAP to copy the string using strcpy().
#include<string.h>
#include<stdio.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter a first string: ");
    scanf("%s", &str1);
    strcpy(str2, str1);
    printf("\nCopied string is: %s", str2);
    return  0;
}