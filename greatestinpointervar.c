#iclude<stdio.h>
int main()
{
 int a,b,c,*p,*q,*r;
 printf("enter the number:");
 scanf("%d",&a);
 printf("enter the second numer);
 scanf("%d",&b);
 printf("enterthe third number");
 scanf("%d",&c);
 p=&a;
 q=&b;
 r=&c;
 if((*p>=*q)&&*p>=*r))
 {
  printf("greatest number is %d",*p);
  }
  else if((*q>=*p)&&(*q>=*r))
  {
   printf("greatest number is %d",*q);
   }
   else
   printf("greatest number is %d",*r);
   }
   return 0;
   }
