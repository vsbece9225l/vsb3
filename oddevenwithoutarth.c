#include<stdio.h>
int main()
{
 int number;
 printf("enter the number:");
 scanf("%d",&number);
 if((number&1))==0)
 {
    printf("even%d",number);
    }
    else
    {
     printf("odd%d",number);
     }
     getch();
     return 0;
     }
