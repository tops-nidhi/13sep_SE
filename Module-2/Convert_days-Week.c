// WAP to convert the days into weeks
#include<stdio.h>
int main()
{
    int days;
    float weeks;
    printf("\nEnter the no of days: ");
    scanf("%d", &days);
    weeks = (float)days /7;
    printf("No of Weeks is %.2f\n", weeks);
    return 0;
}