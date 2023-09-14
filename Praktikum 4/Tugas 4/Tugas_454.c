#include <stdio.h>

int main(){
    int tahun, isKabisat, rangeTahun;

    printf("Masukkan Tahun: "); scanf("%d", &tahun);

    isKabisat = tahun % 4;
    rangeTahun = tahun >= 1900 && tahun <= 2005;

    if (isKabisat == 0) {
        if (rangeTahun == 1) {
            printf("Tahun %d merupakan tahun kabisat.\n", tahun);
        } else {
            printf("Masukkan tahun dari 1900 sampai dengan 2005\n");
        }
    } else {
        if (rangeTahun == 1) {
            printf("Tahun %d bukan merupakan tahun kabisat.\n", tahun);
        } else {
            printf("Masukkan tahun dari 1900 sampai dengan 2005\n");
        }
    }

    return 0;
}