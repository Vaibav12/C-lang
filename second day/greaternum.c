#include <stdio.h>

int main(){

    float a;
    float b;
    float c;
    
    printf("Enter 3 numbers\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a >= b && a > c){
        printf("A is greatest", a);
    }
    else if(b > a && b >= c){
        printf("B is greatest", b);
    }
    else{
        printf("C is greatest", c);
    }
    return 0;
}