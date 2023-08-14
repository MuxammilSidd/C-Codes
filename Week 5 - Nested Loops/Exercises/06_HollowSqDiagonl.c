#include<stdio.h>
int main()
{
    int row;
    printf("Enter rows: ");
    scanf("%d",&row);

    int k = row;
    for(int i = 1; i<=row; i++)
    {
        for(int j=1; j<=row; j++)
        {
            if (i == j || j == 1 || i == row || i == 1 || j == row || j == k)  //j == row-i+1
            {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        k--;
        printf("\n");

    }
    return 0;
}