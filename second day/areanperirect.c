#include<stdio.h>

int main(){
    float L;
    float B;
    float area;
    float perimeter;

    printf("Please enter the length: ");
    scanf("%f", &L);

    printf("Please enter the breadth: ");
    scanf("%f", &B);

    perimeter = 2 * (L + B);

    printf("Perimeter of rectangle is: %.2f\n", perimeter);

    area = L * B;

    printf("Area of rectangle is: %.2f", area);

    return 0;
}