// Write a C program to check if number is Even or Odd.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);

    if ( a%2 == 1)
    {
        printf("\nNumber is Odd.");
    }
    else
    {
        printf("\nNumber is Even");
    }
}