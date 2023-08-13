#include<stdio.h>
int main()
{
    int age;
    int height;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%d",&height);

    // if (age >= 18)
    // {
    //     if (height > 5) {
    //         printf("You are taller and can go the party");
    //     }
    //     else if (height >=3 || height <= 5)
    //         printf("You can go the party");
    // }

    if (age >= 18 && height > 5) 
    {
        printf("You are taller and can go the party");
    }
    else if(age >= 18 && (height >=3 || height <= 5))
    {
        printf("You can go the party");
    }




    else if (age%10 == 0)
    {
        printf("You can also go the party");
    }
    
    else
    {
        printf("You cannot go the party");
    }

    return 0;
}