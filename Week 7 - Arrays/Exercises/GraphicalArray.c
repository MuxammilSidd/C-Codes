// Write a program that prints an array in a nice "graphical" representation
#include<stdio.h>
int inputArr(int arr[], int len)
{
    for(int i=0; i<len; i++)
    {
        printf("Enter number %d element: ", i+1);
        scanf("%d",&arr[i]);
    }
}

int outputArr(int arr2[], int len2)
{
    printf("\n");
    for(int m=0; m<len2; m++)
    {
        printf("\t%d\t",m);
    }
    printf("\n----------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("|\t");
    for(int j=0; j<len2; j++)
    {
        if (j == len2-1)
        {
            printf("%d\t|",arr2[j]);
        }
        else 
        {
            printf("%d\t|\t",arr2[j]);
        }
    }
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------");

}
int main()
{
    int length = 8;
    int a[length];
    inputArr(a, length);
    outputArr(a, length);
    
    return 0;
}