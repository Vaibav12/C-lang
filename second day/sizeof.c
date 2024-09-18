#include <stdio.h>

int main(){

    int a;
    float b;
    char c;

    printf("Size of int is %zu bytes\n", sizeof(int));
    printf("Size of float is %zu bytes\n", sizeof(float));
    printf("Size of char is %zu bytes", sizeof(char));

    return 0;
}