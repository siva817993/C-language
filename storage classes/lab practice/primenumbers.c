#include <stdio.h>
#include <math.h>
int main()
{
 int i, j, m, n, count=0;
 printf("Enter two numbers to print primes within the range: ");
 scanf("%d%d",&m, &n);
 printf("\n Prime numbers in given range are: ");
 for (i=m;i<=n;i++)
 {
 for ( j = 2;j <= sqrt(i);j++)
 {
 if(i%j == 0)
 {
 count++;
 }
 }
 if(count == 0)
 printf("%d\t",i);
 count = 0;
 }
 return 0;
}

