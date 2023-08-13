// Write a program in C which is a Menu-Driven Program to perform a simple calculation.
#include<stdio.h>
int main()
{
    float num1;
    float num2;

    int oper;

    printf("\n***Welcome to Calculator***");

    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);    

    printf("\n\t1. for Addition\n\t2. for Subtraction\n\t3. for Multiplication\n\t4. for Division\n\nEnter Operation: ");
    scanf("%d",&oper);

    if ( oper == 1)
    {
        printf("The sum is %d", num1 + num2);
    }
    else if ( oper == 2)
    {
        printf("The difference is %d", num1 - num2);
    }
    else if ( oper == 3)
    {
        printf("The product is %d", num1 * num2);
    }
    else if ( oper == 4)
    {
        printf("The quotient is %f", num1 / num2);
    }
    else
    {
        printf("\nInvalid Operation");
    }
}