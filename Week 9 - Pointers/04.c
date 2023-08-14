// Fuction Calls
//  i. Pass/Call by value
//  ii. Pass/Call by reference

#include<stdio.h>

// Call by value
// int swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }


// Call by reference
int swap2(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int x = 5;
    int y = 10;
    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("\n\n**Before Swapping**");
    printf("\nX is %d", x);
    printf("\nY is %d", y);

    printf("\nAdress of X is %d",ptr1);
    printf("\nAdress of Y is %d",ptr2);

    printf("\nAdress of ptr1 is %d",&ptr1);
    printf("\nAddress of ptr2 is %d",&ptr2);


    swap2(ptr1, ptr2);

    printf("\n\n**After Swapping**");
    printf("\nX is %d", x);
    printf("\nY is %d", y);

    printf("\nAdress of X is %d",ptr1);
    printf("\nAdress of Y is %d",ptr2);
    
    printf("\nAdress of ptr1 is %d",&ptr1);
    printf("\nAdress of ptr2 is %d",&ptr2);


    return 0;
}