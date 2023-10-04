// WAP to make use of arithmetic operator
/*
    + -> Addition
    - -> Subtraction
    * -> Multiplication
    / -> Division
    % -> Modulo
    Unary Operator:{
        x++
         // Post Increment x = 10; y= ++x ; now both are same.
        --x // Pre Decrement x =9,y= --x ,now both are different.
        
    }

*/
#include<stdio.h>
int main()
{
    int a, b;
    // char a, b;
    float ans;
    printf("Enter the two number: ");
    scanf("%d %d", &a,&b);
    // scanf("%c %c", &a,&b);
    printf("Addition of the a and b is: %d", a + b); //implicate type conversion

    ans = (float)a/(float)b;// calculating the answer using casting operator and storing it in variable 'ans'
    printf("\nDivision of  %d and %d is: %.1f", a, b, ans);
    ans = a++;
    printf("\nIncrement of a is: %f", ans);
    ans = a;
    printf("\nIncrement of a is: %f", ans);
    return 0;
}