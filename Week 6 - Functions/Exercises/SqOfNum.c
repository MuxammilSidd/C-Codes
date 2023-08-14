// Write a program in C to find the square of any number using the function
#include<stdio.h>

int sq(int num)
{
    int ans=num*num;
    printf("\n\nSquare of %d is %d",num,ans);
}
// -----------------------------------------------
int main()
{
    sq(4);
    sq(8);
    sq(6+3);
    return 0;
}