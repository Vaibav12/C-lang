#include <stdio.h>

int main(){
    float a;
    float sq;
    float cube;

    printf("Please enter a number: ");
    scanf("%f", &a);

    sq = a * a;
    printf("Square: %.2f\n", sq);

    cube = a * a * a;
    printf("Cube: %.2f", cube);

    return 0;
}