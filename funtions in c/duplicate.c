#include<stdio.h>
int dup(int x[],int n);
void main()
{
  int  a[1000],i,n,count;
  printf("enter the size of array:");

   scanf("%d",&n);
   printf("enter the elements to array:") ;
   for(i=0;i<n;i++)
    scanf("%d",a[i]);
   printf("\nentered array elements:");
   for(i=0;i<n;i++)
   printf("%d",a[i]);
   count=dup(a,n);
   printf("\n the count is :%d",count);


}
   int dup(int x[],int n)
   {
      int d,i,j,count=0;

      for(i=0;i<n;i++)
      {
          for(j=1;j<n;j++)
            if(x[i]=x[j])
                count++;


      }
       return count;









   }














