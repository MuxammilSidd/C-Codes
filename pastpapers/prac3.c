#include<stdio.h>
int main()
{
    for( int x=1;x<5;x++)
    {
        for(int y=x;y<5;y++)
        {
            printf("%d",y);
        }
        printf("\n");
    }
    return 0;
}