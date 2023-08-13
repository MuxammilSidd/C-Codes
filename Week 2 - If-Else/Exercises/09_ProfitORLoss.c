//  C program to calculate profit or loss. Using if-else.
#include<stdio.h>
int main()
{
    int balanceO;
    int balanceN;
    printf("Enter previous balance: ");
    scanf("%d",&balanceO);

    printf("Enter current balance: ");
    scanf("%d",&balanceN);  

    if(balanceN>balanceO)
    {
        printf("***You have gained Profit!***");
    } 
    else
    {
        printf("***You have gained Loss!***");        
    }

    return 0;
}