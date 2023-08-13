//Design a calcultor by using Switch-Case Statement
#include<stdio.h>
int main()
{
    char operator;
    printf("Enter operator: ");
    scanf("%c",&operator);
    float a;
    float b;

    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    
    

    switch (operator)
    {
        case '+':
            printf("%f + %f = %f",a,b,a+b);
            break;

        case '-':
            printf("%f - %f = %f",a,b,a-b);
            break;

        case '/':
            printf("%f / %f = %f",a,b,a/b);
            break;

        case '*':
            printf("%f * %f = %f",a,b,a*b);
            break;

        default:
            printf("Invalid operator!");
    }


    
    return 0;
}