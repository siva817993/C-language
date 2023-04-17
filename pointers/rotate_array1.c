 #include<stdio.h>
int main()
{
    long int n,r;
    int i,j,temp;
    scanf("%ld%ld",&n,&r);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(j=0;j<r;j++)
    {
        temp = a[0];
        for(i=0;i<(n-1);i++)
        {
            a[i] = a[i+1];
        }
        a[n-1] = temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%ld ",a[i]);
    }
    return 0;
}

