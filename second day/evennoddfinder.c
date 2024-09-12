#include<stdio.h>

int main(){
    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);
    x % 2 == 0 ? printf("Number is even") : printf("Number is odd");
    return 0;
}