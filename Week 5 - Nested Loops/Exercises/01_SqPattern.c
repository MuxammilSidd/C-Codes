//      *********
//      *********
//      *********
//      *********
#include<stdio.h>
int main()
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
    return 0;
}