#include<stdio.h>
int main()
{
 long long n;
 int count=0;
 printf("enter the number");
 scanf("%d",&n);
 while(n!=0);
 {
 n=n/10;
 ++count;
 }
 printf("number of digits:%d",count);
 return 0;
 }
