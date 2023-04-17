#include<stdio.h>
void main()
{
   int x,y,z,*xptr=&x,*yptr=&y,*zptr=&z;
   printf("enter the value of x:") ;
   scanf("%d",&x);
   printf("enter the value of y:");
   scanf("%d",&y);
   printf("enter z value:");
   scanf("%d",&z);
   if(*xptr>*yptr && *xptr>*zptr)
    printf("%d",*xptr);
   else if(*yptr>*zptr)
    printf("%d",*yptr);
   else
    printf("%d",*zptr);










}
