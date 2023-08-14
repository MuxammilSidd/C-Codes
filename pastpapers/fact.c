#include<stdio.h>
void main(void)
{
    int n,i;
    long unsigned int ans=1;
    n=5;
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("%lu",ans);
}