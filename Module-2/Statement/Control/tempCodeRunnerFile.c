// WAP to make simple calculator
#include<stdio.h>
int main()
{
    int a, b;
    int choice;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\n1. Addition\n2. Subtraction \n3. Multiplication\n4. Division \n5. Modulo");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("\nAddition is: %d", a+b);
            break;
        case 2: 
            printf("\nSubtraction is: %d", a-b);
            break;
        case 3:
            printf("\nMultiplication is: %d", a*b);
            break;
        case 4: 
            printf("\nDivision is: %d", a/b);
            break;
        case 5: 
            printf("\nModulus is: %d", a%b);
            break;
        default: 
            printf("\nInvalid input!");
            break;
    }
    return 0;
}