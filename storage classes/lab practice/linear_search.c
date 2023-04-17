int main()
{
 int arr[100];
 int n, i, key;
 printf("\nEnter number of Elements: ");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 scanf("%d", &arr[i]); // Reading values in to an array
 printf("\nEnter an Element to be Searched: ");
 scanf("%d", &key); // reading element to be searched
 for(i=0;i<n;++i)
 {
 if(key==arr[i])
 break;
 }
 if(i==n)
 printf("\nElement is not Available.");
 else
 printf("\nThe element is present at index: %d", i);
 return 0;
}
