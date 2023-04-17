#include<stdio.h>
void function(int );
int main()
{
 void (*function_ptr)(int);
 function_ptr=function;
 function_ptr(3);
return 0;
}
void function(int n )
{

    int k;
    for(k=0;k<n;k++)
        printf("\nsiva");
}
