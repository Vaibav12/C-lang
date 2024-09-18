#include <stdio.h>

int main(){

    int a;
    float b;
    
    printf("Enter an integer:\n");
    scanf("%d", &a);

    b = (float)a;

    printf("The integer %d converted to float is %f", a, b);

    return 0;
}