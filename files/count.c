 #include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *ptr;
    char str[100],ch,str1[1000];
    int count=0,ccount=0,i=0;
    printf("enter the name to be opened :: ");
    gets(str);
    ptr = fopen(str,"w");
    if(ptr==NULL)
    {
        printf("sorry! file has not opened..");
        exit(0);
    }
    printf("read some content to file :: ");
    while((ch=getchar()) != EOF)
        fputc(ch,ptr);
    fclose(ptr);
    printf("enter the name of the file :: ");
    gets(str);
    ptr=fopen(str,"r");
    if(ptr==NULL)
    {
        printf("sorry! file has not opened...");
        exit(0);
    }
    fgets(str1,1000,ptr);
    while(str1[i]!='\0')
    {
        if (str1[i]=='a'||str1[i]=='A'||str1[i]=='e'||str1[i]=='E'||str1[i]=='i'||str1[i]=='I'||str1[i]=='o'||str1[i]=='O'||str1[i]=='u'||str1[i]=='U')
        {
          count++;
        }
        else if(str1[i]==' '||str1[i]=='_')
        {
          i++;
          continue;
        }
        else
        {
          ccount++;
        }
         i++;
     }
    printf("no of vowels are :: %d",count);
    printf("\nnumber of consonants are :: %d",ccount);
    }
