/*
    & - Bitwise AND
    | - Bitwise OR
    ^ - Bitwise XOR
    ~ - Bitwise Compliment
    << - Shift left
    >> - Shift right
*/

#include<stdio.h>
int main()
{
    int a = 5, b = 2;
    printf("a&b=%d\n", (a&b)); // prints the value of bitwise and operation on two numbers
    printf("a|b=%d\n", a|b);
    printf("a^b=%d\n", (a^b));
    printf("~b=%d\n", (~b));
    printf("a<<1=%d\n", (a<<1));
    printf("a>>1=%d\n", (a>>1));
    return 0;
}