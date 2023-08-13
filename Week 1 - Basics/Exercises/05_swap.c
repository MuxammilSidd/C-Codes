// Write a C program to swap values of two variable.

#include<stdio.h>
int main()
{
    int a = 4;
    int b = 8;
    int temp;

    // Before Swapping
    printf("The value of a is %d", a);
    printf("\nThe value of b is %d", b);

    temp = a;
    a = b;
    b = temp;

    // After Swapping
    printf("\n\nThe value of a is %d", a);
    printf("\nThe value of b is %d", b);    
}
