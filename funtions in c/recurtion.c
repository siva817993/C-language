#include<stdio.h>
int test(int n)
{
   if(n==1)
    return 1;
   else
    return 1+test(n-1);

}
void main()
{
  int n;
  printf("\nenter the value of n:") ;
  scanf("%d",&n) ;
  printf("\nthe result of the program is:%d",test(n));















}
