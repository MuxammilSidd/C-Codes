//  Write a C program to convert Decimal to Binary number system.
#include<stdio.h>
int main()
{
    int num = 37;
    int q = 2;
    int num2=0;
    
    while( num != 1)
    {
        num2 = num2 + num % 2;
        num2 = num2 * 10;
        num = num / 2;
    }
    int num3 = num2 + num;      // num3 = 101001
    // printf("%d",num3);


    // Printing ans in Reverse
    int revNum = 0;
    while (num3 != 0)
    {
        revNum = revNum + (num3 % 10);
        revNum = revNum * 10;

        num3 = num3 / 10; 
    }
    revNum = revNum/10;
    printf("%d", revNum);

    return 0;
}