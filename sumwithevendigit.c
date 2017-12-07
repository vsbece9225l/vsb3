#include<stdio.h>
int main()
{
 int num,sum=0,even,digit;
 printf("\nenter the number:");
 scanf("%d",&num);
 printf("enter the even number you want to add with digit:");
 scanf("%d",even);
 while(num!=0)
 {
  digit=num%10;
  sum=sum+digit;
  num=num/10;
  }
  printf("sum of evennumber %d",sum+even);
  return 0;
  }
