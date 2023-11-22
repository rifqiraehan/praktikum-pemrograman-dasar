#include <stdio.h>

/**
 * Buatlah program menggunakan struktur tanggal, yang digunakan untuk menentukan tanggal berikutnya (besok), dengan masukkan dari keyboard berupa tanggal hari ini (tanggal sekarang).
 * Contoh hasil:
 * Tanggal: 26-11-2021
 * Besok Tanggal: 27-11-2021
*/

struct date {
    int tanggal;
    int bulan;
    int tahun;
};

int main(){
    int static jmlHari[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    struct date tgl;

    printf("Tanggal: ");
    scanf("%d-%d-%d", &tgl.tanggal, &tgl.bulan, &tgl.tahun);

    // Cek tahun apakah merupakan tahun kabisat
    if(tgl.tahun % 4 == 0 && tgl.tahun % 100 != 0 || tgl.tahun % 400 == 0){
        jmlHari[1] = 29;
    }

    // cek tanggal apakah lebih dari jumlah hari dalam suatu bulan atau tidak
    if(tgl.tanggal > jmlHari[tgl.bulan - 1] || tgl.tanggal < 1 || tgl.bulan < 1 || tgl.bulan > 12){
        printf("Maaf, tanggal tidak tersedia\n");
    } else if(tgl.tanggal == jmlHari[tgl.bulan - 1]){
        if(tgl.bulan == 12){
            printf("Besok Tanggal: 1-1-%d\n", tgl.tahun + 1);
        } else {
            printf("Besok Tanggal: 1-%d-%d\n", tgl.bulan + 1, tgl.tahun);
        }
    } else {
        printf("Besok Tanggal: %d-%d-%d\n", tgl.tanggal + 1, tgl.bulan, tgl.tahun);
    }

    return 0;
}