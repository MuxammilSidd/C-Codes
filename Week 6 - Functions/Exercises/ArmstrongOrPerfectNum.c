// Write a C program to check whether a number is Armstrong or perfect number using functions
#include<stdio.h>
#include<math.h>

void chec(int num)
{
    int dig, rem, sum = 0, a = 0;
    dig = num;
    
    while (dig != 0)    //Numbers of Digits
    {
        dig = dig / 10;
        a++;
    }
    
    dig = num;
        
    while (dig > 0 )     
    {
        rem = dig % 10;
        int b = pow(rem,a);
        printf("\n%d", b);
        sum = sum + b;
        dig = dig / 10;
        printf("\n%d", sum);
    }
    if ( sum == num )   //Armstrong or not
    {
        
        printf("\n%d is an Armstrong number \n", num );
    }
    else
    {
        printf("\n%d is not an Armstrong number \n", num );
    }
}


void cheq(int num)
{
int rem, sum=0;
for(int i = 1; i < num; i++)  
{  
rem = num % i;  
if (rem == 0)  
{  
 sum = sum + i;  
}  
}  
if (sum == num) 
{ 
printf("\n%d is a Perfect Number",num);
}  
else  
{
printf("\n %d is not a Perfect Number",num);
}
}






int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    chec(a);
    cheq(a);
    int x = pow(5,3);
    printf("%d", x);
    return 0;
}