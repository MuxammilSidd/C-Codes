// C program to find all the roots of a quadratic equation. Using if-else.
#include<stdio.h>
int main()
{
    int a, b, c, D;
    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    printf("Enter c: ");
    scanf("%d",&c);

    D = (b*b)-(4*a*c);
    if( D>0)
    {
        printf("Roots are real.");
    }
    else if( D<0)
    {
        printf("Roots are imaginary.");
    }
    else if( D==0)
    {
        printf("Roots are equal.");
    }

}