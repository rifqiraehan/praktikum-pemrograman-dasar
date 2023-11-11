#include <stdio.h>

/**
 * Buatlah program menggunakan struktur tanggal, yang digunakan untuk menentukan tanggal berikutnya (besok), dengan masukkan dari keyboard berupa tanggal hari ini (tanggal sekarang).
 * Contoh hasil:
 * Tanggal: 26-11-2021
 * Besok Tanggal: 27-11-2021
*/

struct month {
    int jumlah;
    char nama[3];
};

struct date {
    int tanggal;
    int bulan;
    int tahun;
};

int main(){
    static struct month bulan[12] = {
        {31, 'J', 'a', 'n'}, {28, 'F', 'e', 'b'},
        {31, 'M', 'a', 'r'}, {30, 'A', 'p', 'r'},
        {31, 'M', 'e', 'i'}, {30, 'J', 'u', 'n'},
        {31, 'J', 'u', 'l'}, {31, 'A', 'g', 's'},
        {30, 'S', 'e', 'p'}, {31, 'O', 'k', 't'},
        {30, 'N', 'o', 'v'}, {31, 'D', 'e', 's'}
    };

    struct date tgl;

    printf("Tanggal: ");
    scanf("%d-%d-%d", &tgl.tanggal, &tgl.bulan, &tgl.tahun);

    // Cek tahun apakah merupakan tahun kabisat
    if(tgl.tahun % 4 == 0 && tgl.tahun % 100 != 0 || tgl.tahun % 400 == 0){
        bulan[1].jumlah = 29;
    }

    // cek tanggal apakah lebih dari jumlah hari dalam bulan atau tidak
    if(tgl.tanggal > bulan[tgl.bulan - 1].jumlah || tgl.tanggal < 1 || tgl.bulan < 1 || tgl.bulan > 12){
        printf("Maaf, tanggal tidak tersedia\n");
    } else if(tgl.tanggal == bulan[tgl.bulan - 1].jumlah){
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