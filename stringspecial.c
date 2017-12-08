#include<stdio.h>
int main()
{
 char str[50];
 int count;
 int alphabets=digits=special chars=0;
 printf("\nenter the string:");
 gets(str);
 count=strlen(str);
 for(i=0;i<count;i++)
 {
  if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
  {
     alphabets++;
     }
     else if(str[i]>='0'&&str[i]<='9')||(str[i]>='0'&&str[i]<='9')
     {
       digits++;
       }
       else
          {
          specialchars++;
          }
          printf("%d',special chars);
          }
          return 0;
          }
