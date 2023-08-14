// Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
int main()
{
    // int len = 5;
    int arr[5] = {1,2,3,4,5};

    for(int i=4; i != -1; i--)
    {
        printf("%d\t",arr[i]);
    }
    // printf("")
    return 0;
}