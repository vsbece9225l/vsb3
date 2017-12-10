#include<iostream.h>
int main()
{
 int n,i,product,sum=0,digit;
 cout<<"enter the number"<<endl;
 cin>>n;
 while(n!=0)
 {
  digit=n%10;
  n=n/10;
  product=digit*digit;
  sum=sum+product;
  }
  cout<<"the square and sum of individual elements is"<<sum<<endl;
  return 0;
  }
