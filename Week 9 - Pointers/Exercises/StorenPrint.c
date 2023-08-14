// Write a program in C to store n elements in an array and print the
// elements using pointer; print their addresses as well
#include<stdio.h>


int main()
{
    int arr[5] = {1,5,10,4,5};
    int *ptr = arr;

    // ptr = &arr;

    for( int i=0; i<5; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    printf("\n");

    for( int i=0; i<5; i++)
    {
        printf("%d ", (ptr + i));
    }




    return 0;
}