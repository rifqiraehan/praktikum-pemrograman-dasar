#include <stdio.h>

int main() {
    int i, n, angka, jumlah, total;

    total = 0;

    for (i = 1; i <= 5; i++) {
        printf("Masukkan nilai dasar triangular-%d: ", i);
        scanf("%d", &angka);
        jumlah = 0;

        for (n = 1; n <= i; n++)
            jumlah += n;

        total += jumlah;
    }

    printf("Jumlah %d triangular adalah %d\n", i - 1, total);

    return 0;
}

/*
    Note:
    jika Anda memasukkan nilai 1, 2, 3, 4, dan 5 secara berurutan saat program berjalan, program akan menghitung jumlah triangular dari setiap nilai tersebut dan akhirnya akan mencetak jumlah total semua nilai triangular. Mari kita lihat hasilnya:

    Anda memasukkan nilai 1. Program akan menghitung jumlah triangular dari 1, yang sama dengan 1. Jadi, jumlahnya sekarang adalah 1.

    Anda memasukkan nilai 2. Program akan menghitung jumlah triangular dari 2, yang sama dengan 1 + 2 = 3. Jadi, jumlahnya sekarang adalah 1 + 3 = 4.

    Anda memasukkan nilai 3. Program akan menghitung jumlah triangular dari 3, yang sama dengan 1 + 2 + 3 = 6. Jadi, jumlahnya sekarang adalah 4 + 6 = 10.

    Anda memasukkan nilai 4. Program akan menghitung jumlah triangular dari 4, yang sama dengan 1 + 2 + 3 + 4 = 10. Jadi, jumlahnya sekarang adalah 10 + 10 = 20.

    Anda memasukkan nilai 5. Program akan menghitung jumlah triangular dari 5, yang sama dengan 1 + 2 + 3 + 4 + 5 = 15. Jadi, jumlahnya sekarang adalah 20 + 15 = 35.

    Akhirnya, program akan mencetak:

    "Jumlah 5 triangular adalah 35"
*/