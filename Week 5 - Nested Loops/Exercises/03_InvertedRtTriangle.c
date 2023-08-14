// ***********
// ********
// *****
// **
// *
#include<stdio.h>
int main()
{
    int row, coloumn;

    printf("Enter rows: ");
    scanf("%d",&row);

    for(int i=row; i != 0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}