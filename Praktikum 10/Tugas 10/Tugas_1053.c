#include <stdio.h>
#include <stdlib.h>

/**
 * Buatlah program untuk menentukan selisih antara dua tanggal yang berbeda, dimana kedua tanggal tersebut dimasukkan melalui keyboard. Gunakan struktur tanggal, untuk menyimpan kedua tanggal tersebut, kemudian hitunglah selisihnya.
 * Contoh hasil:
 * Tanggal 1: 26-11-2023
 * Tanggal 2: 30-11-2023
 * Selisih Tanggal: 4 Hari
*/

struct date {
    int tanggal;
    int bulan;
    int tahun;
};

struct month {
    int jumlah;
    char nama[3];
};

int main(){
    struct date tgl_1, tgl_2, selisih;

    static struct month bln[12] = {
        {31, {'J', 'a', 'n'}}, {28, {'F', 'e', 'b'}},
        {31, {'M', 'a', 'r'}}, {30, {'A', 'p', 'r'}},
        {31, {'M', 'e', 'i'}}, {30, {'J', 'u', 'n'}},
        {31, {'J', 'u', 'l'}}, {31, {'A', 'g', 's'}},
        {30, {'S', 'e', 'p'}}, {31, {'O', 'k', 't'}},
        {30, {'N', 'o', 'v'}}, {31, {'D', 'e', 's'}}
    };

    int valid_tgl = 0;

    do {
        printf("Waktu 1: ");
        scanf("%d-%d-%d", &tgl_1.tanggal, &tgl_1.bulan, &tgl_1.tahun);
        printf("Waktu 2: ");
        scanf("%d-%d-%d", &tgl_2.tanggal, &tgl_2.bulan, &tgl_2.tahun);

        valid_tgl = (tgl_1.tanggal > 0 && tgl_1.tanggal <= bln[tgl_1.bulan - 1].jumlah && tgl_2.tanggal > 0 && tgl_2.tanggal <= bln[tgl_2.bulan - 1].jumlah);

        if (!valid_tgl) {
            printf("Harap masukkan tanggal yang valid!\n\n");
        }
    } while (!valid_tgl);

    int selisih_hari = 0;   

    // Selisih tahun
    selisih_hari += abs(tgl_2.tahun - tgl_1.tahun) * 365;

    for (int i = 0; i < tgl_1.bulan - 1; i++) {
        selisih_hari -= bln[i].jumlah;
    }
    for (int i = 0; i < tgl_2.bulan - 1; i++) {
        selisih_hari += bln[i].jumlah;
    }

    selisih_hari += tgl_2.tanggal - tgl_1.tanggal;

    printf("Selisih Tanggal: %d Hari", abs(selisih_hari));

    return 0;
}