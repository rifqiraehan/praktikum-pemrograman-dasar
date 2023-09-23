#include <stdio.h>

int main(){
    int i, j, rows, cols, dashWidth;

    printf("Masukkan jumlah baris = ");
    scanf("%d", &rows);

    printf("Masukkan jumlah kolom = ");
    scanf("%d", &cols);

    dashWidth = cols * 4 + 1;

    for (i = 0; i < rows; i++){
        for (j = 1; j <= dashWidth; j++) {
            printf("-");
        }
        printf("\n");

        for (j = 0; j < cols; j++){
            printf("| %d ", j+1);
        }

        printf("|\n");
    }

    for (j = 1; j <= dashWidth; j++) {
        printf("-");
    }

    printf("\n");

    return 0;
}   