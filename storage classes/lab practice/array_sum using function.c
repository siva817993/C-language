#include<stdio.h>
int sum( int arr[],int n);
int main()
{
  int arr[10],i,n,s;
  printf("enter the size of array:") ;
  scanf("%d",&n);
  printf("\nenter array elements:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);

  }
    printf("\nentered array elements are:");
  for(i=0;i<n;i++)
  {
      printf("%d",arr[i]);

  }
 s= sum(arr,n);
  printf("\nsum=%d",s);

}
int sum( int arr[], int size)
{
  int i,n,s=0;
  for(i=0;i<size;i++)
  {

s=s+arr[i];
  }
  return s;



}
