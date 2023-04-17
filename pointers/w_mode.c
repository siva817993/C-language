#include<stdio.h>
void main()
{
int n;
  FILE *fptr ;
  fptr=fopen("t.txt","w") ;
  if(fptr==NULL)
  {
    printf("\nerror!");
    exit(1);
  }


      printf("\nopened successfuly!");
      printf("enter the value of n:");
      scanf("%d",&n);
      fprintf(fptr,"\nn=%d",n);
  fclose(fptr);










}
