#include<stdio.h>
int main()
{
    int stud[3];
    printf("Enter first student: ");
    scanf("%d",&stud[0]);
    printf("\nEnter second student: ");
    scanf("%d",&stud[1]);
    printf("\nEnter third student: ");
    scanf("%d",&stud[2]);

    printf("\n%d\t%d\t%d",stud[0],stud[1],stud[2]);
    return 0;
}