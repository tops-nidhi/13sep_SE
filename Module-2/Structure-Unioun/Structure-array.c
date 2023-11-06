// WAP to get 5 employee name and salary
#include <stdio.h>
struct Employee
{
    char name[20];
    float salary;
};

int main()
{
    struct Employee emp[20];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the Employee name: ");
        scanf("%s", &emp[i].name);
        printf("\nEnter the Salary of : ");
        scanf("%f", &emp[i].salary);
    }
    for(i  = 0; i < 5; i++)
    {
        printf("\n%s your salary is: %f", emp[i].name, emp[i].salary);
    }
    return 0;
}