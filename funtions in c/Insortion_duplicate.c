#include<stdio.h>
int dup(int a[],int i,int n)
{
  for(i=1;i<n;i++)
  {
    int key=a[i] ,j=i-1;
    while(a[j]>key&&j>=1)
    {
        a[j+1]=a[j];
        j--;

    }
    a[j+1]=key;



  }
  int count=0,j;
  for(i=0;i<n;)
  {
      int flag=-1;
    for(j=i+1;j<=n;j++)
    {
        if(a[i]==a[j])
            flag=1;
        else break;

    }
    i=j;
    if(flag!=-1)
        count++;

  }

    return count;
}
    void main()
    {
      int  a[1000] ,i,n;
      printf("\nwelcome thalapathy siva. have a great day.your my hero .your my commendor.karthik,mahima,krishna reddy are fans of thalapathy siva .");
   printf("enter the size of array:");
   scanf("%d",&n);
    printf("\nenter the elements to the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nentered elements are:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    printf("\n count=%d",dup(a,n,i));







    }














