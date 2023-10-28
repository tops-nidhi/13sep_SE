// WAP to get the user's name
#include<stdio.h>
int main()
{
    // char name[50] = {'a','b','c','d','e'};
    // char name[50] = {"abcde"};
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your name is: %s", name);
    return 0;
}