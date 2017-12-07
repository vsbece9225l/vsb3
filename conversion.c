#include<stdio.h>
#include<string.h>
int main()
{
 char str[50];
 char str1[50];
 printf("\nenter the string:");
 gets(str);
 printf("\nenter the string:");
 gets(str1);
 printf("\nstring to convert uppercase %s",strupr(str));
 printf("\nstring to convert lower case %s",strlwr(str1));
 return 0;
 }
 
