// C Program to check entered number is ZERO, POSITIVE or NEGATIVE until user does not want to quit.
#include<stdio.h>
int main()
{
    char i = 'y';

    while (i == 'y')
    {
        int num;
        printf("Enter num: ");
        scanf("%d",&num);

        if(num<0)
        {
            printf("\nNumber is negative.");
        }
        else if(num==0)
        {
            printf("\nNumber is zero.");
        }
        else
        {
            printf("\nNumber is positive.");
        }

        printf("\n\nDo you want to continue? (y/n)\n ");
        scanf("\n%c", &i);

        // if (i != 0 || i != 1)
        // {
        //     printf("INVALID");
        // }

    }

    return 0;
}


