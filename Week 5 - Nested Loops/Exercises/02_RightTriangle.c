//       *
//       **
//       ***
//       ****
//       *****
#include<stdio.h>
int main()
{
    int row, coloumn;

    printf("Enter rows: ");
    scanf("%d",&row);
    
    // printf("Enter column: ");
    // scanf("%d",&coloumn);

    for(int i=1; i<=row; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        


    }
    return 0;
}