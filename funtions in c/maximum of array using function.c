#include<stdio.h>
int arr_max(int x[],int n);
void main()
{
   int a[1000] ,i,n,max;
   printf("enter the size of array:");
   scanf("%d",&n);
    printf("\nenter the elements to the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nentered elements are:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    max= arr_max(a,n);
    printf("\n maximum=%d  ",max);
}
int arr_max(int x[],int size)
{
int i,max= x[0];
      for(i=0;i<size;i++)

      {
          if(max<x[i])
          max=x[i];

      }
      return max;









}
