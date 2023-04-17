#include<stdio.h>
void main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9,},i,j,*ptr;

        printf("\nentered elements:");
    for(i=0;i<3;i++)
    {


        for(j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

        printf("\n address of entered elements:");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
    {
        printf("%u ",&a[i][j]);
    }
        printf("\n");

    }
    ptr=a;
    for(i=0;i<9;i++)
    {
        printf(" %d ",*ptr++);
    }
    printf("\n\n%u",a+0);
        printf("\n\n%u",a+1);
    printf("\n\n%u",a+2);





}


