/* Program yang menentukan kriteria nilai dari input nilai yang dimasukkan user. */

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

    if (nilai >= 81) {
        printf("Nilai %d termasuk A\n", nilai);
    } else if (nilai >= 71) {
        printf("Nilai %d termasuk AB\n", nilai);
    } else if (nilai >= 66) {
        printf("Nilai %d termasuk B\n", nilai);
    } else if (nilai >= 61) {
        printf("Nilai %d termasuk BC\n", nilai);
    } else if (nilai >= 56) {
        printf("Nilai %d termasuk C\n", nilai);
    } else if (nilai >= 41) {
        printf("Nilai %d termasuk D\n", nilai);
    } else {
        printf("Nilai %d termasuk E\n", nilai);
    }

    return 0;
}