#include <stdio.h>

int main(){
    float a = 12,
    b = 8,
    hasil1 = 6 + a / 5 * b,
    hasil2 = a / b * b,
    c = 11.0,
    d = 7.0,
    hasil3 = c / d * d;

    printf("6 + a / 5 * b = %.2f\n\n", hasil1);
    printf("a / b * b = %.2f\n\n", hasil2);
    printf("c / d * d = %.2f\n\n", hasil3);
    printf("-a = %.2f\n", -a);

    return 0;
}