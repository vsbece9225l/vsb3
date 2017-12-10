#include<stdio.h>
int main()
{
 int i,n,sumodd=0;
 printf("\nenter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i+=2)
 {
  if(i%2!=0)
  {
  sumodd=sumodd+i;
  }
  }
  printf("the total sum of oddumber upto given range is %d",sumodd);
  return 0;
  }
