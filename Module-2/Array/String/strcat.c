// WAP to concat the two string
#include<string.h>
#include<stdio.h>
int main()
{
    char fnm[20], lnm[20];

    printf("Enter your first name: ");
    scanf("%s", &fnm);
    printf("Enter your last name: ");
    scanf("%s", &lnm);
    strcat(fnm, " ");
    strcat(fnm, lnm);
    printf("\nYour full name is %s\n", fnm);
    return 0;
}