#include<stdio.h>

void printNumber(int num)   // Parameter
{
    printf("\nNumber is: %d", num);

}

void summ(int num1, int num2)
{
    printf("\n\nThe sum of %d and %d is %d",num1,num2,num1+num2);
}

void multipli(int num1, int num2, int num3)
{
    int ans = num1*num2*num3;
    printf("\n\nProduct of %d,%d and %d is %d",num1,num2,num3, ans);
}

// ------------Main program-------------
int main()
{
    int a = 111;
    printNumber(a);     // Arguments
    
    summ(2,3);
    
    multipli(2,3,4);

    // printf("\n%d", ans);
    return 0;
}
// ----------------------------------------
