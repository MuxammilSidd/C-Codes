//       ************
//     ************
//   ***********

#include<stdio.h>
int main()
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
    return 0;
}

// aaaa*****
// aaa*****
// aa*****
// a*****