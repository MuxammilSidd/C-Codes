#include<stdio.h>
int main()
{

    int num, fact=1;
    num=5;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}