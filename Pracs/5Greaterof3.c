#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter first number: ");
    scanf("%d",&n1);

    printf("Enter second number: ");
    scanf("%d",&n2);

    printf("Enter third number: ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3)
    {
        printf("%d is greatest number.", n1);
    }

     if(n2>n1 && n2>n3)
    {
        printf("%d is greatest number.", n2);
    }

       if(n3>n2 && n3>n1)
    {
        printf("%d is greatest number.", n3);
    }




return 0;



}