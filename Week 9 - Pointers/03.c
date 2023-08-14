#include<stdio.h>
int main()
{
    int num = 10;
    int *ptr;
    ptr = &num;

    int **ptr2;
    ptr2 = &ptr;

    printf("Address of ptr is %d", &ptr);


    printf("\nAddress of ptr is %d", ptr2);
    printf("\nAddress of ptr2 is %d", &ptr2);
    return 0;
}