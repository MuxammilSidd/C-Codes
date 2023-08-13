// C Program to find factorial of a number
#include<stdio.h>
int main()
{
    int a ;
    int i = 1;
    int fact = 1;

    printf("Enter number: ");
    scanf("%d",&a);

    while(i<=a)
    {
        fact = i * fact;    
        i++;
    }
    printf("%d", fact);


    return 0;
}
