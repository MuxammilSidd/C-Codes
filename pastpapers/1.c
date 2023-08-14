#include<stdio.h>
int main()
{
    for(int i=2;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            printf("\t%d",i*j);
        }

        printf("\n");
    }
    return 0;
}