// Write a C program to add two matrices
#include<stdio.h>
int main()
{
    int mat1[2][2]={{2,4},{6,8}};
    int mat2[2][2]={{1,3},{5,7}};

    int sumMat[2][2];

    for (int r=0; r<2; r++)
    {
        for (int c=0; c<2; c++)
        {
            sumMat[r][c] = mat1[r][c] + mat2[r][c];
        }
    }


    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2; j++)
        {
            printf("%d\t",sumMat[i][j]);
        }
        printf("\n");
    }
    return 0;
}