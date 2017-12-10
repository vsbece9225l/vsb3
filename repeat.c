#include<stdio.h>
int main()
{
 int  array[10]={1,2,3,4};
 int array1[10]={3,4,5,6};
 int i,j,n;
 printf("enter the numberofarray elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(array[i]==array1[j])
   {
    printf("the repeated element in the array is %d\n",array[i]);
    }
    }
    }
    getch();
    return 0;
    }
