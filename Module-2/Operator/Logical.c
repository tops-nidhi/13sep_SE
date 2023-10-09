/*
    && - logical AND
    || - Logical OR
    ! - Logical NOT
    T T - T         T T - T
    T F - F         F F - F
    F T - F         T F - T
    F F - F         F T - T
*/
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the 2 numbers: ");
    scanf("%d %d", &x, &y);
    if((x < 0) && (y > 0))
    {
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}