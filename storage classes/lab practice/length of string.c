#include<stdio.h>
int main()
{
    char str[10];
    int i=0,length=0;
    printf("enter the elements to str :");
    gets(str);

    while(str[i]!='\0')
    {
        length++;
        i++;
    }

        printf(" the length of str is %d",length);
    return 0;
}
