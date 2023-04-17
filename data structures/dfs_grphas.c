
#include<stdio.h>
int a[100][100],front=-1,rear=-1,queue[100],size=0,capacity=99,s;
static int v[10];
void dfs(int s,int n)
{

    v[s]=1;
    printf("%d",s);
        for(int i=1;i<=n;i++)
        {
            if(a[s][i]!=0)
            {
                if(v[i]==0)
                {
                    v[i]=1;
                    dfs(i,n);
                }
            }
        }
    }

int main()
{
    int i,j,m,n,s;
    printf("\nenter the number of rows and cloumn::");
    scanf("%d %d",&m,&n);
    printf("\nenter elements :");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("\n%d",&a[i][j]);

        }

    }
    printf("\nenter source element:");
    scanf("%d",&s);
    dfs(s,n);

}
