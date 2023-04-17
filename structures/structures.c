#include<stdio.h>
#include<string.h>
void main()
{
   struct student_details
{
    char gender[10];
    float cgpa;
    char name[20];
    char number[10];
    int sec;

};
struct student_details s;
printf("\n%d",sizeof(s.gender));
printf("\n%d",sizeof(s.cgpa));
printf("\n%d",sizeof(s.name));
printf("\n%d",sizeof(s.number));
printf("\n%d",sizeof(s.sec));
printf("\n%d",sizeof(s));
fflush(stdin);
printf("\nenter the name of the student:");
gets(s.name);
printf("enter the roll number of the student:");
gets(s.number);
printf("\nenter the gender of the student:");
gets(s.gender);
printf("\nenter the cgpa,sec of the student:");
scanf("\n%f%d:",&s.cgpa,&s.sec);
printf("\nentered  name of the student is:");
fflush(stdin);
puts(s.name);
printf("\nentered  gender of the student is:");
puts(s.gender);
printf("\nentered number of the student is:");
puts(s.number);
printf("\nentered cgpa,sec of the student is:");
printf("\n%f\n%d:",s.cgpa,s.sec);




















}
