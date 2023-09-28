#include <stdio.h>

int main() {
    int i, n, value;

    // Deret Bilangan 1
    n = 2;
    for (i = 0; i < 5; i++) {
        printf("%d", n);

        if (i < 4) {
            printf(", ");
        }

        n *= 2;
    }
    printf("\n");

    // Deret Bilangan 2
    for (i = 1; i <= 5; i++) {
        value = i * i;
        printf("%d", value);

        if (i < 5) {
            printf(", ");
        }
    }
    printf("\n");

    // Deret Bilangan 3
    n = 5;

    for (i = 1; i <= n; i++) {
        value = i * i * i;
        printf("%d", value);

        if (i < n) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
