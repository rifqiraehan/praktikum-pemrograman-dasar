#include <stdio.h>
#include <string.h>

/**
 * ------------------ TUGAS TEORI TAMBAHAN!!! ------------------
 * Buatlah kode program untuk menghitung jumlah huruf pada suatu string yang didefinisikan pada variable string "kalimat", bila kalimat tersebut terdapat huruf A s/d Z, baik huruf besar atau huruf kecil, maka tampilkan "SEMPURNA"
 * Contoh:
 * Masukkan kalimat: THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
 * jumlah A = 1
 * jumlah B = 1
 * jumlah C = 1
 * jumlah D = 1
 * jumlah E = 3
 * jumlah F = 1
 * jumlah G = 1
 * jumlah H = 2
 * jumlah I = 1
 * jumlah J = 1
 * jumlah K = 1
 * jumlah L = 1
 * jumlah M = 1
 * jumlah N = 1
 * jumlah 0 = 4
 * jumlah P = 1
 * jumlah Q = 1
 * jumlah R = 2
 * jumlah S = 1
 * jumlah T = 2
 * jumlah U = 2
 * jumlah V = 1
 * jumlah W = 1
 * jumlah X = 1
 * jumlah Y = 1
 * jumlah Z = 1
 * KALIMAT SEMPURNA
*/

struct counter {
    char huruf;
    int hitung;
};

int main() {
    char kalimat[100];
    int i, j;
    struct counter jumlah[26];

    printf("Masukkan kalimat: ");
    fgets(kalimat, 100, stdin);

    for (i = 0; i < 26; ++i) {
        jumlah[i].huruf = 'A' + i;
        jumlah[i].hitung = 0;
    }

    for (i = 0; kalimat[i] != '\0'; ++i) {
        if (kalimat[i] >= 'a' && kalimat[i] <= 'z') {
            ++jumlah[kalimat[i] - 'a'].hitung;
        } else if (kalimat[i] >= 'A' && kalimat[i] <= 'Z') {
            ++jumlah[kalimat[i] - 'A'].hitung;
        }
    }

    for (i = 0; i < 26; ++i) {
        printf("jumlah %c = %d\n", jumlah[i].huruf, jumlah[i].hitung);
    }

    for (i = 0; i < 26; ++i) {
        if (jumlah[i].hitung == 0) {
            printf("BUKAN KALIMAT SEMPURNA\n");
            return 0;
        }
    }

    printf("KALIMAT SEMPURNA\n");

    return 0;
}