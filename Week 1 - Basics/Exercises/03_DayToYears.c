// Write a C program to convert specified days into years, weeks and days.
// (ignore leap year)

#include<stdio.h>
int main()
{
    int days;
    printf("Enter no. of Days: ");
    scanf("%d",&days);

    int years = days / 365;
    int week = (days - (years * 365))/7;
    int day = days - (years * 365)-(week * 7);

    printf("Result is %dYears, %dWeeks & %dDays",years,week,day);
    

}
