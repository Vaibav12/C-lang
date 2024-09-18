#include <stdio.h>

int main(){
    int radius;
    int area;

     printf("Please enter the radius: ");
     scanf("%d", &radius);

     area = 3.14 * radius * radius;
     printf("The area of circle is: %.2d", area);
    
  return 0;
}