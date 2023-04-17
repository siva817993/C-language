#include<stdio.h>
int arr_min(int x[],int n);
void main()
{
   int a[1000] ,i,n,min;
   printf("enter the size of array:");
   scanf("%d",&n);
    printf("\nenter the elements to the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nentered elements are:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    min= arr_min(a,n);
    printf("\n minimum=%d  ",min);
}
int arr_min(int x[],int size)
{
int i,min= x[0];
      for(i=0;i<size;i++)

      {
          if(min>x[i])
          min=x[i];

      }
      return min;









}
