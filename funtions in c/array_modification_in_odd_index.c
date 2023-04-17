#include<stdio.h>
float mod(int a[],int n,int i)
{
    printf("\nHi chinnu garu.");
    int sum=0;
 for(i=0;i<n;i++)
 {
     if(i%2!=0)
     {
       sum=sum+a[i];

     }
 }
 printf("\nsum=%d",sum);
  return sum;
}

    int main()
    {
      int  a[1000] ,i,n;
      float m;
      printf("\nwelcome thalapathi siva.");
   printf("\nenter the size of array:");
   scanf("%d",&n);
    printf("\nenter the elements to the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nentered elements are:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    printf("\n m=%f",mod(a,n,i)/10);







    }


















