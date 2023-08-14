#include<stdio.h>
int main()
{
    int var = 5;
    int *ptr;
    ptr = &var;

    // & = "address of" operator
    // ptr points to variable var       OR
    // ptr has the address of variable var

    printf("\nThe value of var (using var) is: %d", var);

    printf("\nThe address of var (using &var) is: %d", &var);

    printf("\nThe address of var (using ptr) is: %d", ptr);

    printf("\nThe value of var (using *ptr) is: %d", *ptr);

    printf("\nThe address of ptr (using &ptr) is: %d", &ptr);

    printf("\nThe address of var (using &(*ptr)) is: %d", &(*ptr));
    return 0;
}


// var = 5
// 1001

// ptr stores address of variable
// int *ptr;
// ptr = &var;

// ptr = 1001
// 1010