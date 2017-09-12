#include<stdio.h>
int main()
{
 int year;
 printf("enter the year");
 scanf("%d",year);
 if(year%400==0)
  printf("this year is leap year=%d",year);
  else if(year%100==0)
  printf("this year is not a leap year=%d",year);
  else if(year%4==0)
   printf("this year is leap year%d",year);
   else
   printf("this year is not a leap year%d",year);
   return 0;
   }
   
