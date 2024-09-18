#include <stdio.h>
#include<math.h>
int main()
{
   float x1;
   float x2;
   float a;
   float b;
   float c;

   printf("Please enter value of a:");
   scanf("%f", &a);

   printf("Please enter value of b:");
   scanf("%f", &b);

   printf("Please enter value of c:");
   scanf("%f", &c);

   x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
   printf("\nValue of x1 is %f\n", x1);

   x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
   printf("\nValue of x2 is %f\n", x2);

   return 0;
}