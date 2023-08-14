// ***************
//   *************
//     ***********
//        ********
//           *****
//              **
               
#include<stdio.h>
int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    int m = 0;

    for(int i=row; i>=1; i--)
    {
        for(int j=0; j<=m-1; j++)
        {
            printf(" ");
        }

        for(int k=i; k>=1; k--)
        {
            printf(" *");
        }

        printf("\n");
        m++;
    }
    return 0;
}                  