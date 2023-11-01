// WAP to find area of the circle
#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float area;
    printf("Enter radius: ");
    scanf("%d", &r);
    area = (pi * (float)r * (float)r);
    printf("\nArea of the circle is: %f",  area);
}