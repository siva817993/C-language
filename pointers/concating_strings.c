 #include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char * s1 = &str1;
    char * s2 =& str2;

    // Inputting 2 strings from user
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);

    // Moving till the end of str1
    while(*s1!='\0')
    {
        *s1++;
    }


    // Coping str2 to str1
    while(*(s1++) = *(s2++));

    printf("Concatenated string: %s", str1);

    return 0;
}
