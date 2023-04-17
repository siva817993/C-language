#include<stdio.h>
void main()
{int x,y,*xptr=&x,*yptr=&y,sum;
printf("enter the x :");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
sum=*xptr + *yptr;
printf("sum==%d",sum);



}
