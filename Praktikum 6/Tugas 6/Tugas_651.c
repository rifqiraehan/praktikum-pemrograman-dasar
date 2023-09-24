#include <stdio.h>

int kabisat(int tahun) {
    if (tahun % 400 == 0) {
        return 1;
    } else if (tahun % 100 == 0) {
        return 0;
    } else if (tahun % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int tahun;

    printf("Masukkan Tahun: ");
    scanf("%d", &tahun);

    printf("Nilai balik: %d\n", kabisat(tahun));

    return 0;
}