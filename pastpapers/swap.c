#include<stdio.h>
#include<conio.h>
int swap(int a, int b)
{
    int temp;
    printf("\nBefore swapping: N1=%d N2=%d",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("\nAfter swapping: N1=%d N2=%d",a,b);
}

void main(void)
{
    int x=2;
    int y=5;
    swap(x,y);
    getch();
}