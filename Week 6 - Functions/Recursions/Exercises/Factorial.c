// Calculate the factorial of a number using recursion
#include<stdio.h>

// factorial = 5! = 5*4*3*2*1
// 5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1! =  5 * 4 * 3 * 2 * 1 * 0!   

int fact(int x)
{
    if(x!=0)
    {
        return (x*(fact(x-1)));
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    int a = fact(-5);
    printf("%d",a);
    return 0;
} 