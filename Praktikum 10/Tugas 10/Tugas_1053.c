#include <stdio.h>
#include <stdlib.h>

struct date {
    int tanggal;
    int bulan;
    int tahun;
};

int main(){
    struct date tgl_1, tgl_2, selisih;

    int static jmlHari[12] = {
        31, 28, 31, 30, 31, 30, 1, 31, 30, 31, 30, 31
    };

    int valid_tgl = 0;

    do {
        printf("Waktu 1: ");
        scanf("%d-%d-%d", &tgl_1.tanggal, &tgl_1.bulan, &tgl_1.tahun);
        printf("Waktu 2: ");
        scanf("%d-%d-%d", &tgl_2.tanggal, &tgl_2.bulan, &tgl_2.tahun);

        valid_tgl = (tgl_1.tanggal > 0 && tgl_1.tanggal <= jmlHari[tgl_1.bulan - 1] && tgl_2.tanggal > 0 && tgl_2.tanggal <= jmlHari[tgl_2.bulan - 1]);

        if (!valid_tgl) {
            printf("Harap masukkan tanggal yang valid!\n\n");
        }
    } while (!valid_tgl);

    int selisih_hari = 0;

    // Selisih tahun
    selisih_hari += abs(tgl_2.tahun - tgl_1.tahun) * 365;

    for (int i = 0; i < tgl_1.bulan - 1; i++) {
        selisih_hari -= jmlHari[i];
    }
    for (int i = 0; i < tgl_2.bulan - 1; i++) {
        selisih_hari += jmlHari[i];
    }

    selisih_hari += tgl_2.tanggal - tgl_1.tanggal;

    printf("Selisih Tanggal: %d Hari", abs(selisih_hari));

    return 0;
}