#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("\n***TABLE OF %d***\n",num);

    for(i=1; i<=12; i++)
    {
        printf(" %d x %d = %d\n",num,i,num*i);
    }

    return 0;
}