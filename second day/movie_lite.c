#include <stdio.h>

int main(){

    int age;

    printf("Please enter the customer's age:\n");
    scanf(" %d", &age);
    
    if(age < 5){
        printf("This ticket is free");
    }
    else if(age > 5 && age < 60){
        printf("Price of this ticket is $150");
    }
    else{
        printf("Price of this ticket is $100");
    }

    return 0;
}