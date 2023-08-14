// Write a C program to sort array elements in ascending or descending order.
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
    int arr1[7]={5,9,11,4,2,7,14};

    // {5,9,11,4,2,7,14}

    // {2,9,11,4,5,7,14}
    // {2,4,11,9,5,7,14}
    // {2,4,5,9,11,7,14}
    // {2,4,5,7,11,9,14}
    // {2,4,5,7,9,11,14}
    // {2,4,5,7,9,11,14}



    int smallest;
    int smallestIndex;

    for (int i=0; i < 6; i++)
    {
        smallest = arr1[i];
        smallestIndex = i;
        for (int j=i+1; j<7; j++)
        {
            if (smallest < arr1[j])
            {
                smallest = arr1[j];  // 2
                smallestIndex = j;  // 4
            }
        }

        int temp = arr1[i];
        arr1[i] = smallest;
        arr1[smallestIndex] = temp;
        

    }

    for(int m=0; m<7; m++)
    {
        printf("%d  ",arr1[m]);
    }
    return 0;
}