#include<stdio.h>
int dup(int x[],int n);
void main()

{
   int a[1000] ,i,n,c;
   printf("enter the size of array:");
   scanf("%d",&n);
    printf("\nenter the elements to the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nentered elements are:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    c= dup(a,n);
    printf("\n count=%d",c);
}
   int dup(int x[],int n)
   {
      int i,j,c=0,flag=-1;

      for(i=0;i<n-1;i++)

      {
          for(j=1+i;j<n;j++)
          {

            if(x[i]==x[j])
                flag=j;
            else break;
          }
          i=j-1;
          if(flag!=-1)
            c++;

      }






       return c;











}
