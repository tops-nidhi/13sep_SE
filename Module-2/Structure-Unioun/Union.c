// WAP to get the student id and name using structure
#include<stdio.h>
union Stdata{
    // Define data member
    int id;
    char nm[20];
}st;
int main(){
    printf("\nEnter Student Name: ");
    scanf("%s", &st.nm);
    printf("Enter Student ID: ");
    scanf("%d", &st.id);
    printf("\n%s your id is: %d", st.nm, st.id);
    return 0;
}