#include <stdio.h>

int main() {
    double angka, akar;

    do {
        printf("Masukkan angka: ");
        scanf("%lf", &angka);

        if (angka < 0) {
            printf("Angka yang dimasukkan harus non-negatif.\n");
        }
    } while (angka < 0);

    double guess = angka / 2;

    for (int i = 0; i < 6; i++) {
        akar = (guess + angka / guess) / 2.0;
        printf("Akar = (%.2lf + %.2lf / %.2lf) / 2 = %.4lf\n", guess, angka, guess, akar);
        guess = akar;
    }

    printf("Akar kuadrat dari %.2lf adalah %.2lf\n", angka, akar);

    return 0;
}
