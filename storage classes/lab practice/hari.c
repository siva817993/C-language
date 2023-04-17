#include<stdio.h>
int fact(int r)
{
int mul=1;
for(int i=1;i<=r;i++)
{
    mul=mul*i;
}
return mul;
}
void main()
{
    int n,k,r,f,sum=0;
    scanf("%d",&n);
    k=n;
    while(k>0)
    {
        r=k%10;
        f=fact(r);

        sum=sum+f;
        k=k/10;
    }
        if(sum==n)
           printf("Strong");
        else
            printf("no");

}
