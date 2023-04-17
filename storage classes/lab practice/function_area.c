#include <stdio.h>
#define PI 3.14159
float find_area(int);
float find_perimeter(int);
int main()
 {
 int radius;
 float  area, perimeter;
 printf("Enter radius: ");
 scanf("%d", &radius);
 //call Area function
 area = find_area(radius);
 //Call Perimeter function
 perimeter = find_perimeter(radius);
 // Print area and perimeter
 printf("Area of the Circle = %f square inches\n", area);
 printf("Perimeter of the Circle = %f inches\n", perimeter);
 return(0);
}
//called function
float find_area(int r)
{
 return (PI*r*r); // return area to calling function
}
float find_perimeter(int r)
{
 return (2*PI*r); // return perimeter to calling function
}
