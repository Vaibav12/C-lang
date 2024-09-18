#include <stdio.h>

int main(){

    int year;

    printf("Enter year\n");
    scanf("%d", &year);

    ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0)) ? printf("It is a leap year") : printf("It is not a leap year");
    /* by using not logical operator we eliminate all the centurial years from being leap 
    and applying the or logical operator we ascertain that only centurial years divisible by 400 are leap years */
    return 0;
} 