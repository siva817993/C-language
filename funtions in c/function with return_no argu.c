#include<stdio.h>
int add(void);

void main()
{
    int res;
    res= add();
    printf("\nthe sum of a and b is:%d ",res);

}
int add(void)
{

  int a,b,c;
  printf("\nenter the values of a and b:") ;
  scanf("%d%d",&a,&b);
  c=a+b;
  return c;











}


