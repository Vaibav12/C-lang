#include <stdio.h>

int main (){

    float a;
    float b;
    float c;
    printf("Enter the sides of triangle\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    (a + b > c && a + c > b && b + c > a) ? printf("It is a valid triangle") : printf("This triangle cannot be formed");
    
    return 0;
}