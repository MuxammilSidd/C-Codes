// Write a program in C to store elements in an array and print it
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
    printf("{");  
    for(int j=0; j<len2; j++)
    {
        if (j == len2-1)
        {
            printf("%d",arr2[j]);
        }
        else 
        {
            printf("%d, ",arr2[j]);
        }
    }
    printf("}");
}


// ------------------------------------------------------------------------
int main()
{
    int length = 3;
    int a[length];

    inputArr(a, length);
    outputArr(a, length);

    printf("\n");


    int abc[5]= {4,6,7,99,15};
    outputArr(abc, 5);

    return 0;
}