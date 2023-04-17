#include<stdio.h>
void main()
{
    int   a[1000],i,n,j,temp;
    printf("hai siva have a great day:");
    printf("\n enter number of elements to be entered to the array:");
    scanf("%d",&n);
    printf("\nenter the elements to the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nentered  elements to the array are: ");
    for(i=0;i<n;i++)
    {
    printf(" %d ",a[i]);

    }

    i=0;
    j=n-1;
    for(i=0;i<j;i++)
    {

        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j=j-1;

    }

        printf("\n the array reversal is: ");
    for(i=0;i<n;i++)
    {
    printf(" %d ",a[i]);

    }











}
