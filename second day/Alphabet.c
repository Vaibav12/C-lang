#include <stdio.h>
#include <ctype.h>

int main() {

    char c;

    printf("Please enter a variable:\n");
    scanf("%c", &c);

    c = toupper(c);

    (c >= 'A' && c <= 'Z') ? printf("The entered variable is an alphabet") : printf("The entered variable is not an alphabet");

    return 0;
}