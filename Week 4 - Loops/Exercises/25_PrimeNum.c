// Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int i = 2;
    int flag;
    printf("Enter number: ");
    scanf("%d",&num);
    int j;

    while(i <= sqrt(num))
    {
        if (num == 0 || num == 1)  
        {
            flag = 1;
            break;
        } 
        



    }

    if(flag == 1)
    {
        printf("\nNumber is Prime.");
    }
    else if(flag == 0)
    {
        printf("\nNumber is not Prime");
    }

    return 0;
}

// Prime Numbers: 0,1,2,3,5,7,11,13,17,19
// 