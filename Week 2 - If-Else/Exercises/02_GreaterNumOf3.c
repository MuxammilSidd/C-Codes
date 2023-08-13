// Write a C program to find maximum between three numbers.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);

    if (a > b && a > c)
    {
        printf("First Number is greatest.");
    }
    else if (b > a && b > c)
    {
        printf("Second Number is greatest.");

    }
    else if(c > a && c > b)
    {
        printf("Third Number is greatest.");
    }
    else if(a == b && a > c)
    {
        printf("First & Second numbers are greatest.");
    }
    else if(a == c && a > b)
    {
        printf("First & Third numbers are greatest.");
    }
    else if(b == c && b > a)
    {
        printf("Second & Third numbers are greatest.");
    }
    else if( a == b && b==c)
    {
        printf("The numbers are equal.");
    }
    
    return 0;
}