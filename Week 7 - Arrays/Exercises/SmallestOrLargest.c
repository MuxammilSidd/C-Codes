// Write a C program to find smallest and largest element in an array
#include<stdio.h>
int main()
{
    int arr[5] = {5,100,50,1000,101};
    int smallest,largest;

    smallest = arr[0];
    largest = arr[0];
    for(int i=1; i<5; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
        
        if ( largest < arr[i])
        {
            largest = arr[i];
        }
    }
    
    printf("\nLargest element is %d", largest);
    printf("\nSmallest element is %d", smallest);
    return 0;
}