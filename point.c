#include<stdio.h>
int main()
{
 int *a,*b,num;
 printf("enter the two numbers:");
 scanf("%d%d",a,b);
 num=*a+*b;
 printf("the sum of two pointer variable is%d",num);
 return 0;
 }
