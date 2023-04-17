#include<stdio.h>
int main()
{
 int arr[100], i, j, n, x,  ipos, temp;
 // Reading size of data
 printf("\n Enter number of Elements: ");
 scanf("%d", &n);
 // Reading input data
 printf("\n Enter Elements: ");
 for(i=0;i<n;i++)
 scanf("%d", &arr[i]);
 //Sorting data
 for(i=0;i<n-1;i++) // 9 8 7 6 5
 {
 ipos = i; // 0
 for(j=i+1;j<n;j++) // 1<5, 2<5, 3<5, 4<5, 5<5
 {
 if(arr[j]<arr[ipos]) // 8<9, 7<8, 6<7, 5<6
 ipos = j; // 1, 2, 3, 4
 }
 temp = arr[ipos];
 arr[ipos]=arr[i];
 arr[i]=temp;
 }
 printf("\nThe elements after sorting: ");
 for(i=0;i<n;i++)
 printf("%d ", arr[i]);
 return 0;

}


