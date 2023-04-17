#include<stdio.h>
void main()
{
  int n,i,j,count;
  printf("\nenter the value of n") ;
  scanf("%d",&n);
  i=2;
  while(i<=n)
  {
      j=1;
      count=0;
      while(j<=i)
      {
          if(i%j==0)
          {

            count=count+1;
          }
          j=j+1;

      }
      if(count==2)
      {
          printf(" %d ",i);

      }
      i=i+1;
  }









}
