#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Please enter the amount:\n");
    scanf("%d", &a);

    b = a / 500;
    a = a % 500;

    b += a / 100;
    a = a % 100;

    b += a / 50;
    a = a % 50;

    b += a / 20;
    a = a % 20;

    b += a / 10;
    a = a % 10;

    b += a / 5;
    a = a % 5;

    b += a / 2;
    a = a % 2;

    b += a / 1;
    a = a % 1;

    printf("The number of notes to be returned: %d", b);

    return 0;
}