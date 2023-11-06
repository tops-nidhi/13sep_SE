// WAP to get the student id and name using structure
#include<stdio.h>
struct Stdata{
    // Define data member
    int id;
    char nm[20];
}st;
int main(){
    printf("Enter Student ID: ");
    scanf("%d", &st.id);
    printf("\nEnter Student Name: ");
    scanf("%s", &st.nm);
    printf("\n%s your id is: %d", st.nm, st.id);
    return 0;
}