// Write a program in C to display the multiplication table of a given integer.
#include<stdio.h>
int main()
{
    int a;
    int i = 1;
    
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Table of %d is: \n",a);
    while (i <= 10)
    {
        printf("%d x %d = %d\n",a, i, i*a);
        i++;
    }


    return 0;
}