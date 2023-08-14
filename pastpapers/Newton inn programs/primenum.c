#include<stdio.h>
#include<conio.h>
void main(void)
{
    // int n;
    // printf("ENter number of prime numbers to generate: ");
    // scanf("%d",&n);

    // for(int i=1; i<=n; i++)
    // {
    //     if(i%2==1)
    //     {
    //         printf("%d\n",i);
    //     }
    //     else
    //     {
    //         continue;
    //     }
    // }

       int i, num, n, count;
   printf("Enter the range: ");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);

   for(num = 1;num<=n;num++)
   {
      count = 0;
      for(i=2;i<=num/2;i++)
    {
         if(num%i==0)
         {
            count++;
         break;
        }
    }
   if(count==0 && num!= 1)
   {
      printf("%d ",num);

   }
   }
   
}