#include<stdio.h>
#include<conio.h>
void insertion(int a[],int n)

{
 int i,j,key;
 for(i=1;i<n;i++)
 {
    key =a[i];
    j=i-1;
    while(a[j]>key && j>=0)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
 }

}
int main()
{
   int a[1000] ,i,n;
   printf("enter the size of array:");
   scanf("%d",&n);
   printf("\nenter the array elements:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }

insertion(a,n);
    printf("\n elements after sorted:");
       for(i=0;i<n;i++)
   {
      printf("  %d ",a[i]);
   }
getch();
return 0;



}




