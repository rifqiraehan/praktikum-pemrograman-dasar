/* Program yang menentukan tahun kabisat dari input tahun yang dimasukkan user. */

#include <stdio.h>

int main(){
    int nilai;

    do {
        printf("Masukkan Nilai: ");
        scanf("%d", &nilai);

        if (nilai < 0 || nilai > 100) {
            printf("Masukkan nilai dari 0 hingga 100!\n", nilai);
        }
    } while (nilai < 0 || nilai > 100);

    if (nilai >= 81 && nilai <= 100) {
        printf("Nilai %d termasuk A\n", nilai);
    } else if (nilai >= 71 && nilai <= 80) {
        printf("Nilai %d termasuk AB\n", nilai);
    } else if (nilai >= 66 && nilai <= 70) {
        printf("Nilai %d termasuk B\n", nilai);
    } else if (nilai >= 61 && nilai <= 65) {
        printf("Nilai %d termasuk BC\n", nilai);
    } else if (nilai >= 56 && nilai <= 60) {
        printf("Nilai %d termasuk C\n", nilai);
    } else if (nilai >= 41 && nilai <= 55) {
        printf("Nilai %d termasuk D\n", nilai);
    } else if (nilai >= 0 && nilai <= 40) {
        printf("Nilai %d termasuk E\n", nilai);
    }

    return 0;
}