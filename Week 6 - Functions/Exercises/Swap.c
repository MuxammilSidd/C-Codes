//  Write a program in C to swap two numbers using function.
#include<stdio.h>


int svap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}
// ---------------------------------------------------------
int main()
{
    int x = 10;
    int y = 50;

    x = svap(x, y);

    printf("%d   %d", x, y);
    return 0;
}

// int a = 1
// int b = 9

// int temp;

// temp = a;
// a = b;
// b  = temp