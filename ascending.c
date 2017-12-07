#include<stdio.h>
void ascendsort(int num[],int count)
{
 int temp,i,j,k;
 for(j=0;j<count;++j)
 {
  for(k=j+1;k<count;++k)
  {
    if(number[j]>number[k])
    {
      temp=number[j];
      number[j]=number[k];
      number[k]=temp;
      }
     }
     }
     printf("ascending order:");
     for(i=0;i<count;i++)
     {
      printf("%d"\n,number[i]);
      }
      void main()
      {
       int i,count,number[20];
       printf("how many elements you want to enter:");
       scanf("%d",&count);
       printf("enter the elements:");
       for(i=0;i<count;i++)
       {
       scanf("%d",&number[i]);
       }
       ascensort(number,count);
       }
       
      
