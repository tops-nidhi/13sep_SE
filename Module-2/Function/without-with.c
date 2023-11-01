#include<stdio.h>
void add(int a, int b)// Call by value
{
    printf("Addition is: %d", a+b);
}
int main(){
    int x = 9, y = 6;
    add(9, 6);
    return 0;
}