// WAP to check the number is even or odd
#include<stdio.h>
int main()
{
    int i;
    int num, flag = 0;
    printf("Enter a number to check whether is prime or not: ");
    scanf("%d", &num);
    if(num < 1)
    {
        printf("\nNumber must be positive.");
        flag = -1;
    }
    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            goto prime;
        }
    }
    prime:
    if(flag == 0)
    {
        printf("\n%d is prime number.", num);
    }
    else{
        printf("\n%d is not a prime number.", num); 
    }
    return 0;
}