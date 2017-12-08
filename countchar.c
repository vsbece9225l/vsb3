#include<stdio.h>
int main()
{
 int count=0;
 int i=0;
 char line[100];
 printf("\nenter the line of text:");
 scanf("%[^\n]",line);
 while(line[i]!='\0')
 {
   count=count+1;
   i++;
   }
   printf("total number of character in a given string %d",count);
   return 0;
   }
