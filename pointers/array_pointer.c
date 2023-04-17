#include<stdio.h>
void main()
{
    int a[100],i,n,*ptr;
    printf("enter the value of n:");
    scanf("%d",&n);
    ptr=&a;
    printf("\nenter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
        printf("\nentered elements:");
        for(i=0;i<n;i++)
        printf("\n%p",ptr+i);
    for(i=0;i<n;i++)
        printf("\n%d ",*(ptr+i));





}

