#include<stdio.h>
int main()
{
    int a;
    printf("Enter value less than 5: ");
    scanf("%d",&a);

    switch (a)
    {
        case 2: 
            printf("\nAllow2");
            break;

        case 1:
            printf("\nAllow1");
            break;

        case 3:
            printf("\nAllow3");
            break;

        case 4:
            printf("\nAllow4");   
            break;

        default:
            printf("\nNumber is not less than 5");
    }

    printf("\nDONE!");

}