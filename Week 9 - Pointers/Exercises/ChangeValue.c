// Write a program to change the value of a variable to ten times of its current value using functions. 
// And pass the value by reference

#include<stdio.h>

int change(int *a)
{
    *a *= 10;   // *a = *a x 10;
}

int main()
{
    int x=2;
    int *q = &x;

    printf("\nBefore calling : %d",x);

    change(q);

    printf("\nAfter calling: %d",x);

    return 0;
}