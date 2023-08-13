//  Write a C program to find first and last digit of a number
#include<stdio.h>
int main()
{
    int num = 10000008;
    int firstDigit;
    int LastDigit;

    LastDigit= num%10;




    while(num != 0)
    {
        if (num < 10) 
        {
            firstDigit = num;
        }
        num = num / 10;
    }
    printf("\n First digit is: %d\n Last digit is: %d",firstDigit, LastDigit);
    return 0;
}   