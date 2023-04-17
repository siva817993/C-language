#include<stdio.h>
void arr_arg(int x[]);
void main()
{
   int i,a[10];
   printf("enter the  10 array elements:");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   arr_arg(a);
}
    void arr_arg(int x[])


   {
     int i;
     printf("\nthe entered  10 elements are");
     for(i=0;i<10;i++)
       printf(" %d ",x[i]);











   }








