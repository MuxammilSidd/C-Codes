// Write a C program to read roll no, name and marks of three subjects and
// calculate the total, percentage and grade.
#include<stdio.h>
int main()
{
    float maths, eng, comp;
    int rollno;
    
    printf("Enter Roll NO: ");
    scanf("%d",&rollno);

    printf("Enter Maths marks: ");
    scanf("%f",&maths);

    printf("Enter English marks: ");
    scanf("%f",&eng);

    printf("Enter Computer marks: ");
    scanf("%f",&comp);    

    int totalMarks = 300;
    float obtainedMarks = maths + eng + comp;
    float per = (obtainedMarks * 100) / totalMarks;

    printf("\n_____________\nRoll No: %d\nObtained Marks: %f\n Percentage: %f", rollno, obtainedMarks, per);

    if ( per >= 80)
    {
        printf("\nGrade: A1");
    }
    else if ( per >= 70 && per < 80)
    {
        printf("\nGrade: A");
    }
    else if (per>= 60 && per<70)
    {
        printf("\nGrade: B");
    }
    else if (per>= 50 && per<60)
    {
        printf("\nGrade: C");
    }
    else if (per>= 50 && per<60)
    {
        printf("\nGrade: D");
    }
    else if (per>= 40 && per<50)
    {
        printf("\nGrade: E");
    }
    else if (per<40)
    {
        printf("\nGrade: F");
    }
    
}