// Find the sum and product of all element of an array
#include<stdio.h>
int main()
{
    int arr[4] = {4,4,4,4};
    int sum=0, product=1;

    for (int i=0; i<4; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    printf("\nSum of elements in Array is %d",sum);
    printf("\nProduct of elements in Array is %d",product);
    return 0;
}