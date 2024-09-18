#include <stdio.h>
#include <math.h>

int main(){

    float a;
    float b;
    float c;

    printf("Enter the base number:\n");
    scanf("%f", &a);

    printf("Enter the exponent:\n");
    scanf("%f", &b);

    c = pow(a, b);

    printf("%.2f raised to the power of %.2f is %.2f\n", a, b, c);

    return 0;
}