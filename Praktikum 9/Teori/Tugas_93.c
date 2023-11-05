#include <stdio.h>
#include <string.h>

/**
 * Buatlah coding untuk Mencetak huruf A sampai E dengan ukuran 8x lipat, dengan contoh dua huruf A dan B disamping, gunakan variabel pointer untuk meng-copy data tersebut, dengan alokasi memori baru.
*/

int main() {
    int i, j, k;
    int *data_huruf_ptr[5][8][8];

    static int data_huruf[5][8][8] = {
        // huruf A
        {{0, 1, 1, 1, 1, 1, 0, 0},
         {0, 1, 0, 0, 0, 1, 0, 0},
         {0, 1, 0, 0, 0, 1, 0, 0},
         {1, 1, 1, 1, 1, 1, 1, 0},
         {1, 1, 0, 0, 0, 0, 1, 0},
         {1, 1, 0, 0, 0, 0, 1, 0},
         {1, 1, 0, 0, 0, 0, 1, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
        },
        // huruf B
        {{1, 1, 1, 1, 1, 1, 0, 0},
         {1, 0, 0, 0, 0, 1, 0, 0},
         {1, 0, 0, 0, 0, 1, 0, 0},
         {1, 1, 1, 1, 1, 1, 1, 0},
         {1, 1, 0, 0, 0, 0, 1, 0},
         {1, 1, 0, 0, 0, 0, 1, 0},
         {1, 1, 1, 1, 1, 1, 1, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}},
        // huruf C
        {{1, 1, 1, 1, 1, 1, 1, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 1, 1, 1, 1, 1, 1, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}},
        // huruf D
        {{1, 1, 1, 1, 1, 0, 0, 0},
         {1, 0, 0, 0, 0, 1, 0, 0},
         {1, 0, 0, 0, 0, 0, 1, 0},
         {1, 0, 0, 0, 0, 0, 1, 0},
         {1, 0, 0, 0, 0, 0, 1, 0},
         {1, 0, 0, 0, 0, 1, 0, 0},
         {1, 1, 1, 1, 1, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}},
        // huruf E
        {{1, 1, 1, 1, 1, 1, 1, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 1, 1, 1, 1, 1, 1, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 0, 0, 0, 0, 0, 0, 0},
         {1, 1, 1, 1, 1, 1, 1, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}},
        };

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            for (k = 0; k < 8; k++) {
                data_huruf_ptr[i][j][k] = &data_huruf[i][j][k];
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            for (k = 0; k < 8; k++)
                if (data_huruf[i][j][k]) {
                    putchar('\xDB');
                } else {
                    putchar(' ');
                }

            for (k = 0; k < 8; k++)
                if (*data_huruf_ptr[i][j][k]) {
                    putchar('\xDB');
                } else {
                    putchar(' ');
                }
            puts("");
        }
    }

    return 0;
}