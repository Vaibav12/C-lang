#include <stdio.h>

int main(){

    int x;

    printf("Please enter a number:\n");
    scanf("%d", &x);

    x >= 0 ? printf("The number is positive") : printf("The number is negative");
    
    return 0;
}