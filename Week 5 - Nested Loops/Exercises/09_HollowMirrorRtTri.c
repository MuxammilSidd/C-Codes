    //         *
    //       ***
    //      ****
    //     *****
    //    ******
    //   *******
#include<stdio.h>
int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    int m = 1;

    for(int i=row; i>=1; i--)
    {
        for(int j=1; j<=i-1; j++)
        {
            printf("  ");
        }

        for(int k=1; k<=m; k++)
        {
            if (k == 1 || k == m || m == row)
                printf(" *");
            else{
                printf("  ");
            }
        }

        printf("\n");
        m++;
    }
    return 0;
}    