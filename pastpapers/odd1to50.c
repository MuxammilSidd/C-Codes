#include<stdio.h>
int main()
{
    int oddnum;
    for(int i=1;i<=50;i++)
    {
        if(i%2==1)
        {
            printf("%d",i);
        }
        
        printf("\n");
    }
    return 0;
}