#include <stdio.h>

void sort_numbers_ascending(int number[], int count)
{
   int temp, i=0, j;
   if(count>0)
   {
       i++;
         j=i+1;
         if (number[i] > number[j])
         {
            temp = number[j];
            number[j] = number[i];
            number[i] = temp;

         }


      sort_numbers_ascending(number,count-1);

   }
   else
   {
       return ;
   }

   printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d\n", number[i]);
}
void main()
{
   int i, count, number[20];

   printf("How many numbers you are gonna enter:");
   scanf("%d", &count);
   printf("\nEnter the numbers one by one:");

   for (i = 0; i < count; ++i)
      scanf("%d", &number[i]);

   sort_numbers_ascending(number, count);
}
