#include<stdio.h>
int main()
{
 char str[50],str1[50];
 int i=0,j;
 char ch;
 printf("\nenter the first word:");
 gets(str);
 printf("\nenter the second word:");
 gets(str1);
 j=strlen(str1);
 while(str[i]!='\0')
 {
   ch=str[i];
   str1[j]=ch;
   i++;
   j++;
   }
   str1[j]='\0';
   printf("concatenated string is %s",str1);
   return o;
   }
