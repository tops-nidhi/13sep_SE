// WAP to Print and user's id.
#include<stdio.h>
int id;
void get(){
    printf("Enter your ID: ");
    scanf("%d", &id);
}
void show(){
    printf("Your id is: %d", id);
}
int main(){
    get();
    show();
}