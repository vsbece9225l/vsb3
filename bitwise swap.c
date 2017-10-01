#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the numbers:");
 scanf("%d%d",&a,&b);
 c=a^b;
 a=a^c;
 b=b^c;
 printf("after swap a=%d\n,a&b=%d\n");
 return 0;
 }
