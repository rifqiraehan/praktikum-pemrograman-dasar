#include <stdio.h>

void generateMagicSquare(int n, int magicSquare[][n]) {
    // Menginisialisasi semua elemen menjadi 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    // Mengatur nilai elemen tengah dari baris pertama menjadi 1
    int i = 0;
    int j = n / 2;
    magicSquare[i][j] = 1;

    // Mengisi sisa dari bujursangkar ajaib
    for (int num = 2; num <= n * n; num++) {
        int next_i = (i - 1 + n) % n;
        int next_j = (j + 1) % n;
        if (magicSquare[next_i][next_j] == 0) {
            i = next_i;
            j = next_j;
        } else {
            i = (i + 1) % n;
        }
        magicSquare[i][j] = num;
    }
}

void printMagicSquare(int n, int magicSquare[][n]) {
    printf("Ordo %dx%d\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Masukkan Ordo: ");
    scanf("%d", &n);

    int magicSquare[n][n];
    generateMagicSquare(n, magicSquare);
    printMagicSquare(n, magicSquare);
    return 0;
}