#include<stdio.h>
void fib(int n)
{
   static int n1=0,n2=1,n3;
   if(n>2)
   {
       n3=n1+n2;
       n1=n2;
       n2=n3;
       printf(" %d ",n3);
       fib(n-1);

   }

}
void main()
{
   int n;
   printf("\nenter the value of n:");
   scanf("%d",&n) ;
   printf("\nthe fibonicc sequence is:");
    printf(" %d %d ",0,1);
   fib(n);










}


