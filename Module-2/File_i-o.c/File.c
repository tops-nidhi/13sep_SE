// WAp to write and read the data from the file
#include<stdio.h>
int main() {
    FILE *fptr;
    char str[50];
    fptr = fopen("hello.txt", "a");
    /*if (fptr == NULL) { 
        printf("Error!");
        exit(0);
        }
    else{}*/
    fprintf(fptr, "Nidhi");
    fclose(fptr);
    fptr = fopen("hello.txt", "r");
    fscanf(fptr, "%s", &str);
    printf("%s\n", str);
    fclose(fptr);
    return 0;
}