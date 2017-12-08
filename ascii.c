#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
 int number,result;
 printf("\nenter any digit/letter/number:");
 number=getch();
 result=toascii(number);
 printf('\n ascii value of %c is %d",number,result);
 return 0;
 }
