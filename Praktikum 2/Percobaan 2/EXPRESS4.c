#include <stdio.h>

int main(){
    int a = 14, b = 2, c = 3, d = 4;

    printf("a %% b = %d\n\n", a % b);
    printf("a %% c = %d\n\n", a % c);
    printf("a %% d = %d\n\n", a % d);
    printf("a / d * d + a %% d = %d\n", a / d * d + a % d);

    return 0;
}