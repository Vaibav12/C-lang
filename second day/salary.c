#include <stdio.h>

int main(){

    float salary;
    float HRA;
    float DA;
    float gross;

    printf("Enter your salary:\n");
    scanf("%f", &salary);

    if(salary <= 10000){
    DA = salary * 20 / 100;
    HRA = salary * 80 /100;
    gross = salary + DA + HRA;
    printf("Gross income: %.2f", gross);
    }
    else if(salary <= 20000){
    DA = salary * 25 / 100;
    HRA = salary * 90 /100;
    gross = salary + DA + HRA;
    printf("Gross income: %.2f", gross);
    }
    else{
    DA = salary * 30 / 100;
    HRA = salary * 95 /100;
    gross = salary + DA + HRA;
    printf("Gross income: %.2f", gross);
    }
    return 0;

}