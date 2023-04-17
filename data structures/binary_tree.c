
#include<stdio.h>
int static a[100],i,li,pos;
int ele;
void btinsert(int ele)
{
    printf("\nenter element to be insert");
    scanf("%d",&ele);
    if(a[1]==0)
    {
        a[1]=ele;
        li++;
    }
    else
    {
        li++;
        a[li]=ele;
    }
}
void delete(int ele)
{
    printf("\nenter element to be delete:");
    scanf("%d",&ele);
    for(i=1;i<=li;i++)
    {
        if(a[i]==ele)
        {
            pos=i;
            break;
        }
    }
    if(i>li)
    {
        printf("\nelement not found");

    }
    else
    {
        a[pos]=a[li];
        a[li]=0;
        li--;
    }
}
void display()
{
    for(i=1;i<=li;i++)
    {
        printf(" %d ",a[i]);
    }
}
void main()
{
    int op=0;
    while(op<=3)
    {
        printf("\n1.insert");
        printf("\n2.delete");
        printf("\n3.display");
        printf("\nenter opation");
        scanf("%d",&op);
        switch(op)
        {
            case 1:btinsert(ele);
            break;
            case 2:delete(ele);
            break;
            case 3:display();
            break;
            default:
            break;
        }
    }
}
