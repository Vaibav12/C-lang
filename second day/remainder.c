#include <stdio.h>

int main(){
    int a;
    int b;
    int remainder;

    printf("Please enter 2 numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    remainder = a % b;
    printf("Remainder: %d", remainder);

    return 0;
}