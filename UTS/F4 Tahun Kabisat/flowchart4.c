/* Program yang menentukan tahun kabisat dari input tahun yang dimasukkan user. */

#include <stdio.h>

int main(){
    int tahun;

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if (tahun % 400 == 0) {
        printf("%d adalah tahun kabisat\n", tahun);
    } else if (tahun % 100 == 0) {
        printf("%d bukan tahun kabisat\n", tahun);
    } else if (tahun % 4 == 0) {
        printf("%d adalah tahun kabisat\n", tahun);
    } else {
        printf("%d bukan tahun kabisat\n", tahun);
    }

    return 0;
}