#include<stdio.h>
void main()
{
    int x=21,*ptr,**pptr;
    ptr=&x;
    pptr=&ptr;
    printf("%d\n",x);//21
        printf("%u\n",&x);//gv 36

    printf("%u\n",ptr);//gv address of x 36
        printf("%u\n",&ptr);//gv address of pointer 24
    printf("%u\n",*pptr);//gv adress of x 36

        printf("%d\n",*ptr);//21
        printf("%u\n",pptr);//gv adress of pointer
            printf("%d\n",**pptr);//21











}
