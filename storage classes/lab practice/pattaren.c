#include<stdio.h>
int main()
{
 int i, j, k, n;
 printf("Enter positive value of n: ");
 scanf("%d", &n);
 for(i = 1;i <= n;i++)// to print n lines
 {
 k=65;
 for(j=1;j<=i;j++)
 {
 printf("%c",k); //to print alphabets
 k++;
 }
 printf("\n");
 }
 return 0;
}

