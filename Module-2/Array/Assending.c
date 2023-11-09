#include <stdio.h>
int main()
{
    int array[10];
    int i, j;
    int temp;
    for (i = 0; i < 6; i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 6; i++)
    {
        for(j = i+1; j < 6; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    printf("Value of the array[%d]: %d\n", i, array[i]);
    }
}
/*
1 2 3
6 5 4
7 8 9
*/