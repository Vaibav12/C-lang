#include <stdio.h>

int main(){

    float a;
    float b;
    float c;
    float d;
    float e;
    float result;

    printf("Please enter marks scored\n");

    printf("Computer: ");
    scanf("%f", &a);

    printf("Social Science: ");
    scanf("%f", &b);

    printf("Maths: ");
    scanf("%f", &c);

    printf("English: ");
    scanf("%f", &d);

    printf("Hindi: ");
    scanf("%f", &e);

    result = (a + b + c + d + e) / 5;

    printf("You scored: %.2f\n", result);
    if(result >= 90 ){
        printf("Grade- A");
    }
    else if(result >= 80){
        printf("Grade- B");
    }
    else if(result >= 70){
        printf("Grade- C");
    }
    else if(result >= 60){
        printf("Grade- D");
    }
    else if(result >= 40){
        printf("Grade- E");
    }
    else{
        printf("Grade- F");
    }

    return 0;
}