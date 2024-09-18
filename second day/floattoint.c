#include <stdio.h>

int main(){

    float a;
    int b;

    printf("Enter a number:\n");
    scanf("%f", &a);

    b = (int)a;

    printf("The float %f coverted to int is %d", a, b);

    return 0;
}