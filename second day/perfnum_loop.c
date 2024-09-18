#include <stdio.h>

int main(){

    int n1;
    int sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &n1);

    if(n1 < 0){
        printf("Invalid input");
        return 1;
    }

    for (int i = 1; i <= n1 / 2; i++){
        if(n1 % i == 0){
           sum += i;
        } 
    }

    if(sum == n1){
        printf("This is a perfect number");
    }
    else{
        printf("This is not a perfect number");
    }
    return 0;
}