//  Write a C program to search an element in an array.
#include<stdio.h>
int main()
{
    int arr[5] = {2,4,6,8,10};
    printf("Enter value: ");
    int val;
    int flag = 0;
    scanf("%d",&val);

    for(int i=0; i<5; i++)
    {
        if(val==arr[i])
        {
            printf("Value %d Found at index %d",val, i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Not Found");
    }

    return 0;
}