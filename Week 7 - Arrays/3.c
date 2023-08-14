#include<stdio.h>
int main()
{
    int length = 5;
    char stud[length];

    for (int i=0; i<length; i++)
    {
        printf("Enter %d student: ", i+1);
        scanf(" %c",&stud[i]);
    }

    for(int j=0;j<length;j++)
    {
        printf("\t%c",stud[j]);
        printf("\t%d\n",&stud[j]);
    }

    // printf("\n%d\t%d\t%d",stud[0],stud[1],stud[2]);
    return 0;
}

