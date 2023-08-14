// Write a C program to find power of any number using recursion.
#include<stdio.h>

// 2^5 = 2 * 2^4    =    2 * 2 * 2^3    =   2 * 2 * 2 * 2^2
//  = 2 * 2 * 2 * 2 * 2^1   =   2 * 2 * 2 * 2 * 2 * 2^0

int power(int base, int p)
{
    if(p!=0)
    {
        return (base * power(base, p-1));
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num=power(5,3);
    printf("%d",num);
    return 0;
}