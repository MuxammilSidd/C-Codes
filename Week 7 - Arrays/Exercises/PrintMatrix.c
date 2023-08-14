// Write a C program to print a matrix (2D Array)
#include<stdio.h>
int main()
{
    int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };

    // printf("%d ", arr[0][0]);
    // printf("%d ", arr[0][1]);
    // printf("%d ", arr[0][2]);
    // printf("%d ", arr[1][0]);
    // printf("%d ", arr[1][1]);

    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}