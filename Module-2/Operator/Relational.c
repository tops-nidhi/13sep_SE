/*
    < - Less then
    > - grater than
    <= - Less than or equal to
    >= - grater than or equal to
    == - equal to
    != - Not equal
*/ 
// WAP to find the number is negative, positive or neutral
#include<stdio.h>
int  main()
{
    int number;
    printf("\nInsert the value: ");
    scanf("%d", &number); //to get the number
    if(number < 0) //condition
    {
        printf("\n%d is a Negative number.", number);
    }
    // else if(number == 0){
    //     printf("\n%d is neutral number.", number);
    // }
    else{
        if(number > 0){
        printf("No is positive.");}
        else{
            printf("\n%d is neutral number.", number);
        }
    }
    return 0;
}