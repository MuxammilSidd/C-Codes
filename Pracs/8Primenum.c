#include<stdio.h>
int main()
{
    int num,i,flag = 0;
    printf("Enter a positive number: ");
    scanf("%d",&num);

    //0 and 1 are not prime numbers.
    //Change flag to 1 for non-prime numbers.

    if(num==0 || num==1)
    {
        flag=1;
    }

    for( i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("%d is a PRIME NUMBER.", num);
    }
    else
    {
        printf("%d is NOT a prime number.",num);
    }
    
    return 0;
    

}