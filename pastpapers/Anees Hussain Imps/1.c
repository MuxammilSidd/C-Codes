#include<stdio.h>
#include<conio.h>
void main(void)
{
    
    for(int i=2; i<=20; i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {printf("\n%d",i*i);
        }


    }
    getch();
}