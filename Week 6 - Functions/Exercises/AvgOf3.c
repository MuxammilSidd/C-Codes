// Write s program to find average of three numbers using function
#include<stdio.h>
void ave(int a,int b,int c)
{
    float ans=(a+b+c)/3;
    printf("\n\nAverage is %f",ans);
}

// ----------------------------------------------
int main()
{
    ave(2,3,4);
    ave(2,2,2);
    return 0;
}