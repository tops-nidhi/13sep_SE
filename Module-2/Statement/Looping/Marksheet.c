#include <stdio.h>
int main()
{
    int id = 101, sub1 = 50, sub2 = 50, sub3 = 50;
    int total;
    char nm = 'A';
    total = sub1 + sub2 + sub3;
    printf("______________________________________________");
    printf("\n|Id|\tName|\tSub1|\tSub2|\tSub3|\tTotal|\n");
    printf("______________________________________________\n");
    printf("\n%d|\t%c|\t%d|\t%d|\t%d|\t%d", id, nm, sub1, sub2, sub3, total);
    printf("\n______________________________________________\n");

    return 0;
}