#include <stdio.h>

int main(){

    int a;
    int b;
    int c;

    printf("Enter your cost price: ");
    scanf("%d", &a);

    printf("Enter your selling price: ");
    scanf("%d", &b);

    c = b - a;

    printf("Total profit :$%d", c);

    return 0;
}