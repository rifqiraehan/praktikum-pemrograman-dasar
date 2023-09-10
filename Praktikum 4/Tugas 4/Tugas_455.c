#include <stdio.h>
#include <math.h>

int main(){
    int A, B, C, D;
    float x, j;

    printf("Masukkan nilai A: "); scanf("%d", &A);
    printf("Masukkan nilai B: "); scanf("%d", &B);
    printf("Masukkan nilai C: "); scanf("%d", &C);

    D = B*B - 4*A*C;

    printf("Nilai determinan adalah %d\n", D);

    if (D > 0) {
        x = (-B + sqrt(D)) / (2 * A);
        printf("Persamaan x1: %.2f\n", x);
        x = (-B - sqrt(D)) / (2 * A);
        printf("Persamaan x2: %.2f\n", x);
    } else if (D < 0) {
        x = (-B - sqrt(D)) / (2 * A)*j;
        printf("Persamaan x1: %.2fj\n", x);
        x = (-B - sqrt(D)) / (2 * A)*j;
        printf("Persamaan x2: %.2fj\n", x);
    } else {
        x = -B / (2 * A);
        printf("Persamaan x1 dan x2: %.2f", x);
    }

    return 0;
}