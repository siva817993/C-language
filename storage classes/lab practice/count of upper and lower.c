#include<stdio.h>
int main()
{
 int i, upper_case_count = 0, lower_case_count = 0;
 char C[100];
 printf("\nEnter a line of text: ");
 gets(C);
 i = 0;
 while(C[i]!= '\0')
 {
 if(C[i] >='A' && C[i]<='Z')
 upper_case_count++;
 else if (C[i] >='a' && C[i]<='z')
 lower_case_count++;
 i++;
 }
 printf("\nUpper Case Letters are: %d", upper_case_count);
 printf("\nLower Case Letters are: %d", lower_case_count);
 return 0;
}
