#include<stdio.h>
void natural(int n1)
{
    static int i=1;
   if(n1>0)
   {

       printf(" %d ",i);
       i=i+1;
       natural(n1-1);

   }

}
void main()
{
   int n;
   printf("\nenter the value of n:");
   scanf("%d",&n) ;
   printf("\nthe natural number sequence is:");
   natural(n);










}



