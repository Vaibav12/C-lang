#include<stdio.h>
#include<ctype.h>

int main() {

    float temp;
    char unit;
    
    printf("please enter the unit of temp: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Please enter temperature in celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("Temperature in fahrenheit is: %f", temp);
    }

    else if(unit == 'F'){
        printf("Please enter temperature in Fahrenheit:");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("Temperature in celsius is: %f", temp);
    }

    else{
        printf("Please enter a valid unit of temperature");
    }

    return 0;
}