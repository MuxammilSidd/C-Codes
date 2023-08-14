// Write a program to print the value of a variable by using pointer to
// pointer type of variable

#include<stdio.h>
int main()
{
    int a = 5;

    int *x = &a;
    int **y = &x;

    printf("\n**Address of a**");    
    printf("\n%d", &a);
    printf("\n%d", x);
    printf("\n%d", *y);

    printf("\n\n**Value of a**");    
    printf("\n%d", a);
    printf("\n%d", *x);
    printf("\n%d", **y);

    return 0;
}