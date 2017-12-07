#include<stdio.h>
int main()
{
float p,r,t,i;
printf("\nenter the principle amount:");
scanf("%f",p);
printf("\nenter the interest rate:");
scanf("%f",r);
printf("number of years:");
scanf("%d",t);
i=p*r/100*t;
printf("%f",i);
return 0;
}
