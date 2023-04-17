#include<stdio.h>
int a,b,u,s,n,i,j,ne=1;
static int v[10],min,mincost,cost[10][10];
void main()
{
    printf("\nenter number of nodes");
    scanf("%d",&n);
    printf("enter the matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }
    v[1]=1;
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
            if(cost[i][j]<min)
            {
            if(v[i]!=0)
        {
            min=cost[i][j];
            a=u=i;
            b=s=j;
        }
            }
            }
    }
        if(v[u]==0 ||v[s]==0)
        {
            printf("\nedge %d:(%d %d)cost%d",ne++,a,b,min);
            mincost+=min;
            v[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\n%d",mincost);
}
