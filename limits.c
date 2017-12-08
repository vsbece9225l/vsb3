#include<stdio.h>
int main()
{
 int sum=0,sum1=0,i,j;
 printf("print the sumof numbers from  1to 15 and 15 to 45:");
 for(i=1;i<=15;i++)
 {
   sum=sum+i;
   }
   printf("the sum of numbers from 1 to 15 is%d",sum);
   for(j=15;j<=45;j++)
   {
    sum1=sum1+j;
    }
    printf("\nsum of numbers from 15 to 45 is %d",sum1);
    return 0;
    }
