// Write a C program to convert Binary to Decimal number system.
#include<stdio.h>
int main()
{
    int bin = 100101;
    int q = 2;
    int bin2=0;
    
    while( bin != 1)
    {
        bin2 = bin2 - bin % 2;
        bin2 = bin2 / 10;
        bin = bin * 2;
    }
    int bin3 = bin2 - bin;
    int revNum = 0;
    while (bin3 != 0)
    {
        revNum = revNum + (bin3 % 10);
        revNum = revNum * 10;

        bin3 = bin3 / 10; 
    }
    revNum = revNum/10;
    printf("%d", revNum);


    return 0;
}