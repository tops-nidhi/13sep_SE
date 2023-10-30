// WAP to compare the two string.
#include<stdio.h>
#include<string.h>
int main()
{   
    char str1[20], str2[20];
    printf("Enter first string: ");
    scanf("%s", &str1);
    printf("\nEnter second string: ");
    scanf("%s", &str2);
    int cmp = strcmp(str1, str2);
    if(cmp == 0)
    printf("\nBoth strings are equal.");
    else if(cmp > 0)
    printf("\n%s is max string", str1);
    else
    printf("\n%s is max string", str2);
    return 0;
}