#include <stdio.h>

int main() {
    char retry;

    do {
        int number, digit, sum = 0;
        printf("Masukkan bilangan bulat positif: ");
        scanf("%d", &number);

        printf("Jumlah angka dalam bilangan %d adalah ", number);

        int reversedNumber = 0;

        while (number > 0) {
            digit = number % 10;
            sum = sum + digit;
            reversedNumber = reversedNumber * 10 + digit;
            number = number / 10;
        }

        while (reversedNumber > 0) {
            digit = reversedNumber % 10;

            if (reversedNumber / 10 == 0) {
                printf("%d", digit);
            } else {
                printf("%d + ", digit);
            }

            reversedNumber = reversedNumber / 10;
        }

        printf(" = %d\n", sum);

        printf("Coba lagi? (y/n): ");
        scanf(" %c", &retry);
    } while (retry == 'y');

    return 0;
}

/*
    Catatan Rifqi Raehan:
    Spasi sebelum %c hanya digunakan pada variable yang memiliki tipe data char untuk mengabaikan whitespace.
*/
