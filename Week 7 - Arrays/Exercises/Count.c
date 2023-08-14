// Write a C program to count total number of element of an array
#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,55,10};

    int a = sizeof(arr);
    int b = sizeof(arr[0]);

    printf("\n%d",a/b);

    return 0;
}