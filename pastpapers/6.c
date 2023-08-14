#include<stdio.h>
int main()
{
    for(int i=2;i<10;i++)
    {
        printf("%d",i);
        if(i%2==0)
        {
            continue;
        }
        printf("\n");
    }
    return 0;
}