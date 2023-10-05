/* Program menghitung nilai akar kuadrat */

#include <stdio.h>
#include <math.h>

int main() {
    double angka, akar;

    do {
        printf("Masukkan angka: ");
        scanf("%lf", &angka);

        if (angka < 0) {
            printf("Angka yang dimasukkan harus non-negatif.\n");
        }
    } while (angka < 0);

    akar = sqrt(angka);
    printf("Akar kuadrat dari %.2lf adalah %.2lf\n", angka, akar);

    return 0;
}
