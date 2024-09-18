#include <stdio.h>

int main() {
    int age_group;
    char d, g;
    int f, h, i;
    int e;

    printf("Enter how many different age groups are present:\n");
    scanf("%d", &age_group);

    if(age_group == 1){
        printf("Please enter the type of age group(a, b, c):\n");
        scanf(" %c", &d);
        if(d == 'a'){
            printf("Please enter the amount of person:\n");
            scanf("%d", &f);
            e = f * 0;
            printf("Your total amount is %d\n", e);
        }
        else if(d == 'b'){
            printf("Please enter the amount of person\n");
            scanf("%d", &f);
            e = f * 150;
            printf("Your total amount is %d\n", e);
        }
        else if(d == 'c'){
            printf("Please enter the amount of person\n");
            scanf("%d", &f);
            e = f * 100;
            printf("Your total amount is %d\n", e);
        }
        else{
            printf("Please select a valid age group\n");
        }
    } else if(age_group == 2){
        printf("Please enter the age groups(a, b, c):\n");
        scanf(" %c", &d);
        scanf(" %c", &g);
        if(d == 'a' && g == 'b' ){
            printf("Please enter no. of persons in group a:\n");
            scanf("%d", &h);
            printf("Please enter no. of persons in group b:\n");
            scanf("%d", &i);
            e = h * 0 + i * 150;
            printf("Your total amount is %d:\n", e);
        }
        else if(d == 'a' && g == 'c'){
            printf("Please enter no. of persons in group a:\n");
            scanf("%d", &h);
            printf("Please enter no. of persons in group c:\n");
            scanf("%d", &i);
            e = h * 0 + i * 100;
            printf("Your total amount is %d:\n", e);
        }
        else if(d == 'b' && g == 'c'){
            printf("Please enter no. of persons in group b:\n");
            scanf("%d", &h);
            printf("Please enter no. of persons in group c:\n");
            scanf("%d", &i);
            e = h * 150 + i * 100;
            printf("Your total amount is %d:\n", e);
        }
        else{
            printf("Wrong Input");
        }
    }
    else if(age_group == 3){
        printf("Please enter no. of persons in group a:\n");
        scanf("%d", &f);
        printf("Please enter no. of persons in group b:\n");
        scanf("%d", &h);
        printf("Please enter no. of persons in group c:\n");
        scanf("%d", &i);
        e = f * 0 + h * 150 + i * 100;
        printf("Your total amount is %d", e);
    }
    else{
        printf("Please enter a valid amount of age groups");
    }

    return 0;
}