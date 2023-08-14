//  Write a C program to copy all elements from an array to another array
#include<stdio.h>


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


int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5];

    // outputArr(arr1, 5);
    // outputArr(arr2, 5);

    // arr2[0] = arr1[0];
    // arr2[1] = arr1[1];
    // outputArr(arr2, 5);

    for(int i=0;i<5;i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nArray 1 = ");
    outputArr(arr1, 5);
    printf("\nArray 2 = ");
    outputArr(arr2, 5);
    return 0;
}