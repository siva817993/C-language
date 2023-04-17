#include<stdio.h>
int fact(int n)
{
   if(n==1)
    return 1;
   else
    return n*fact(n-1);

}
void main()
{
  int n;
  printf("\nhai thalapathy.have a god day.your my boss:");
  printf("\nenter the value of n:") ;
  scanf("%d",&n) ;
  printf("\nthe factorial value of the given number  is:%d",fact(n));















}
