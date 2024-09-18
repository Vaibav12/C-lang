#include <stdio.h>

int main(){
    float a;
    float b;
    float add;
    float subtract;
    float multiply;
    float division;

    printf("Please enter 2 numbers :\n");
    scanf("%f", &a);
    scanf("%f", &b);

    add = a + b;
    printf("Sum: %.2f\n", add);

    subtract = a - b;
    printf("Subtract: %.2f\n", subtract);

    multiply = a * b;
    printf("Multiplication: %.2f\n", multiply);

    division = a / b;
    printf("Division: %.2f", division);

    return 0;
}