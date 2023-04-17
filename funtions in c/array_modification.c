#include<stdio.h>
int mod(int a[],int n,int i)
{
    int sum=0,mod=0;
 for(i=0;i<n;i++)
 {
     if(i%2==0)
     {
       sum=sum+a[i];

     }
 }
 printf("\nsum=%d",sum);
 mod=sum*5;
  return mod;
}

    int main()
    {
      int  a[1000] ,i,n,m;
      printf("\nwelcome thalapathy siva. have a great day.your my hero .your my commendor.karthik,mahima,krishna reddy are fans of thalapathy siva .");
   printf("enter the size of array:");
   scanf("%d",&n);
    printf("\nenter the elements to the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nentered elements are:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    printf("\n mod=%d",mod(a,n,i));







    }


















