#include <stdio.h>
int main()
{
 int MDArray[2][2][2], sum = 0;
 printf("Enter 8 values: ");
 for (int i = 0; i < 2; ++i)
 {
 for (int j = 0; j < 2; ++j)
 {
 for (int k = 0; k < 2; ++k)
 {
 scanf("%d", &MDArray[i][j][k]);
 }
 }
 }
 for (int i = 0; i < 2; ++i)
 {
 for (int j = 0; j < 2; ++j)
 {

 for (int k = 0; k < 2; ++k)
 {
 sum+=MDArray[i][j][k];
 }
 }
 }
 printf("\nThe Sum of Multi-Dimensional Array is: %d", sum);
 return 0;
}

