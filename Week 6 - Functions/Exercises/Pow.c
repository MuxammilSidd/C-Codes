// Write a C program to find power of any number using function.
#include<stdio.h>


int power(int base,int exp)
{
    int ans=1;
    for(int i=1;i<=exp;i++)
    {
        ans = ans * base;  //   2, 4, 8
    }

    return ans;
}


int main()
{
    int ANS=power(9,0);
    printf("%d",ANS);
    return 0;
}