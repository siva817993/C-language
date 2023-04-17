#include<stdio.h>
void main()
{
int n;
  FILE *fptr ;
  fptr=fopen("f.txt","r") ;
  if(fptr==NULL)
  {
    printf("\nerror!");
    exit(1);
  }


      printf("\nopened successfuly!");
      fscanf(fptr,"%d",&n);
      printf("\nn=%d",n);
  fclose(fptr);










}
