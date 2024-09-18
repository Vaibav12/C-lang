#include <stdio.h>
#include <ctype.h>

int main (){

    char x;

    printf("Enter a character\n");
    scanf("%c", &x);

    x = tolower(x);

    (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') ? printf("The entered character is a vowel") : printf("The entered character is a consonant");

    return 0;
}