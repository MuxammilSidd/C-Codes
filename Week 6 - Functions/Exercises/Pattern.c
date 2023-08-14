// Write a c program to print different patterns using functions
#include<stdio.h>

void sq_pattern()
{
    int row, coloumn;

    printf("Enter rows: ");
    scanf("%d",&row);
    
    printf("Enter column: ");
    scanf("%d",&coloumn);

    for(int i=1; i<=row; i++)
    {
        printf("\n");

        for (int j=1; j<=coloumn; j++)
        {
            printf("*");
        }
    }
}


void rtri_pattern()
{
    int row, coloumn;

    printf("Enter rows: ");
    scanf("%d",&row);

    for(int i=1; i<=row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


void hollowtri_pattern()
{
    int row;

    printf("Enter rows: ");
    scanf("%d",&row);
    
    for(int i=1; i<=row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i || j == 1 || i == row) 
            {
               printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


void rhombus_pattern()
{
    {
    int row;

    printf("Enter rows: ");
    scanf("%d",&row);

    int m = row-1;
    for(int i=1; i<=row; i++)
    {
        for(int j=m; j!=0; j-- )
        {
            printf(" ");
        }
        for(int k=1; k<=row; k++)
        {
            printf("*");
        }
        printf("\n");
        m--;
    }
}
}


// --------------------------------------------------
int main()
{
    int x;

    while (x != 0)
    {
        printf("\n\nPress\n\t1. Square Pattern\n\t2. Right Triangle\n\t3. Hollow Triangle\n\t4. Rhombus\n\t0. Exit\n");
        scanf("%d",&x);

        if(x==1)
        {
            sq_pattern();
        }
        else if(x==2)
        {
            rtri_pattern();
        }
        else if(x==3)
        {
            hollowtri_pattern();
        }
        else if(x==4)
        {
            rhombus_pattern();
        }
        else if(x==0)
        {
            break;
        }
        else
        {
            printf("Invalid");
        }
    }

    return 0;
}