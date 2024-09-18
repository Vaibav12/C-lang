#include <stdio.h>

int main(){

    int a;
    int b;
    int c;

    printf("Enter the angles of triangle\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    ((a > 0 && b > 0 && c > 0) && (a + b + c == 180)) ? printf("This is a valid triangle") : printf("This is not a valid triangle");
    
    return 0;
}