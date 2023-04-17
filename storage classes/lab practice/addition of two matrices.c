#include<stdio.h>
int  main()
{
 int a[10][10],b[10][10],c[10][10] ,p,q , n,m,i,j;
 printf("\nenter the  order of matrix a :",n*m);
 scanf("%d%d",&n,&m);
 printf("\nenter the order of the matrix b:",p*q);
 scanf("%d%d",&p,&q);
 if(n==p && m==q)
 {
printf("\nenter %d the elements to matrix a:",n*m);
 for(i=0;i<n;i++)
 {
   for(j=0;j<m;j++)
   {
       scanf("%d",&a[i][j]);

   }

 }
 printf("\nenter %d the elements to array b:",p*q);
 for(i=0;i<p;i++)
 {
    for(j=0;j<q;j++)
    {
        scanf("%d",&b[i][j]);
    }
 }
 printf("\nthe resultant matrix a+b is:");
 for(i=0;i<p;i++)
 {
   for(j=0;j<q;j++)
   {
     c[i][j]=a[i][j]+b[i][j];

     printf(" %d ",c[i][j]);

   }

    printf("\n");
 }

 }

else
{
   printf("\nsorry addition not possible:") ;
}






















}
