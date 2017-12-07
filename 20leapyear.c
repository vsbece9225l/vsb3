#include<stdio.h>
int main()
{
 int year;
 clrscr();
 printf("\nenter the 20leap year:");
 for(year=2016;year<2029;year+=4)
 {
  if(year%4==0)
  {
    printf("\nthe year %d is leap year",year);
    }
    else if(year%400==0)
    {
     printf("\nthe year %d is leap year",year);
     }
     else
     {
      printf("\nthe year is %d not leap year",year);
      }
      getch();
      return 0;
      }
