
#include<stdio.h>
#include<stdlib.h>
int main()
{

  FILE *fptr ;
  char s;
  fptr=fopen("f.txt","w") ;

      if(fptr==NULL)
      {
        printf("Error");
        exit(0);
      }
    printf("\neneter the data:");
      while((s=getchar())!='$')
      {
         fputc(s,fptr) ;
      }
  fclose(fptr);

  fptr=fopen("f.txt","r") ;
    if(fptr==NULL)
      {
        printf("Error");
        exit(0);
      }
      printf("\nenetered  data:");
      while((s=fgetc(fptr))!=EOF)
      {
         putchar(s);
      }
  fclose(fptr);

return 0;
}
