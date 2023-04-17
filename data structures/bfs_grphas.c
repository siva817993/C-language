#include<stdio.h>
int a[100][100],front=-1,rear=-1,queue[100],size=0,capacity=99;
static int v[10];
void enqueue(int s)
{
    if(size==capacity)
    {
        printf("queue is full");
    }
    else if(size==0)
    {
        front=front+1;
        rear=rear+1;
        queue[rear]=s;
        size++;
    }
    else
    {
        rear=(rear+1)%capacity;
        queue[rear]=s;
        size++;
    }
}
    int dequeue()
 {
     int temp=front;
    if(size==0)
    {
        printf("underflow");
    }
    else if(size==1)
    {
        front=-1;
        rear=-1;
        size=0;
    }
    else
    {
        front=(front+1)%capacity;
        size=size-1;
    }
    return queue[temp];

}
void bfs(int s,int n)
{
    int x;
    v[s]=1;
    enqueue(s);
    while(size!=0)
    {
         x=dequeue();
        printf("%d, ",x);
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]!=0)
            {
                if(v[i]==0)
                {
                    v[i]=1;
                    enqueue(i);
                }
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
    bfs(s,n);

}
