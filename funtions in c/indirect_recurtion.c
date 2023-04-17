#include<stdio.h>
void odd(int n);
void even(int n);
void main()
{
  int n=1;
odd(n);

}
void odd(int n)
{
    if(n<=10)
    {
        printf(" %d ",n+1);
        n++;
        even(n);
    }
}
void even(int n)
{
    printf(" %d ",n-1);
        n++;
        odd(n);
}
