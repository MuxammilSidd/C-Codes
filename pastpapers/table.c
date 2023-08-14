#include<stdio.h>
int main()
{
    int num;
    printf("ENter number: ");
    scanf("%d",&num);
    printf("***TABLE OF %d***",num);
    for(int i=1;i<=10;i++)
    {
        printf("\n%d",num*i);
    }
    return 0;
}