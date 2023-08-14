#include<stdio.h>
int main()
{
    int num = 80;
    int *ptr;
    ptr = &num;

    int num2 = 90;
    int *ptr2;
    ptr2 = &num2;

    printf("\nAddress of num is %d", ptr);
    printf("\nAddress of num2 is %d", ptr2);
    // printf("Adress of num is %d", ptr);
    return 0;
}