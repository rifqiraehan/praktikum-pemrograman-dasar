#include <stdio.h>

int main() {

    int rows, cols, i, j, k, value, dashWidth;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &rows);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &cols);

    dashWidth = cols * 7 + 1;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= dashWidth; j++) {
            printf("-");
        }
        printf("\n");

        for (j = 1; j <= cols; j++) {
            value = 1;
            for (k = 1; k <= i; k++) {
                value *= j;
            }
            printf("| %4d ", value);
        }
        printf("|\n");
    }

     for (j = 1; j <= dashWidth; j++) {
        printf("-");
    }
    printf("\n");

    return 0;
}
