// * 
// **
// * *
// *  *
// *****   

#include<stdio.h>
int main()
{
    int row;

    printf("Enter rows: ");
    scanf("%d",&row);
    

    for(int i=1; i<=row; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            if (j == i || j == 1 || i == row) {
               printf("* ");
            }
            else {
                printf("  ");
            }
        }


        printf("\n");
        


    }
    return 0;

}