#include<stdio.h>
int main()
{
 int n, m = 0, r, t;
 printf("Enter the number to check for Palindrome: ");
 scanf("%d",&n);
 t=n; //store the number you want to check
 while(n>0) //to reverse given number
 {
 r=n%10;
 m=m*10+r;
 n=n/10;
 }
 if(m == t) // to check given number and reversed number
 printf("**Number is a Palindrome**");
 else
 printf("**Number is not a Palindrome**");
 return 0;
}
