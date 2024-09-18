#include <stdio.h>

int main(){
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    age >= 18 ? printf("You're eligible to vote") : printf("You're not elgible to vote as you are too young");
    return 0;
}