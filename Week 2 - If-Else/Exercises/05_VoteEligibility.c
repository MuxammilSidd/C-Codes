// Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age of candidate: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Candidate is eligible to cast their vote.");
    }
    else
    {
        printf("Candidate is not eligibile to cast their vote.");
    }
    return 0;
}