#include <stdio.h>
#include <stdlib.h>

/**
 * Buatlah program untuk menentukan selisih antara dua waktu yang berbeda, dimana kedua waktu tersebut dimasukkan melalui keyboard. Gunakan struktur waktu, untuk menyimpan kedua waktu tersebut, kemudian hitunglah selisihnya.
 * Contoh hasil:
 * Waktu 1: 08:30:00
 * Waktu 2: 11:37:19
 * Selisih waktu = 3 Jam 7 Menit 19 Detik
*/

struct waktu {
    int jam;
    int menit;
    int detik;
};

int main(){
    struct waktu waktu_1, waktu_2, selisih;

    printf("Waktu 1: ");
    scanf("%d:%d:%d", &waktu_1.jam, &waktu_1.menit, &waktu_1.detik);

    printf("Waktu 2: ");
    scanf("%d:%d:%d", &waktu_2.jam, &waktu_2.menit, &waktu_2.detik);

    // hitung selisih waktu menggunakan abs() untuk menghindari nilai negatif
    selisih.jam = abs(waktu_2.jam - waktu_1.jam);
    selisih.menit = abs(waktu_2.menit - waktu_1.menit);
    selisih.detik = abs(waktu_2.detik - waktu_1.detik);

    printf("Selisih waktu = %d Jam %d Menit %d Detik", selisih.jam, selisih.menit, selisih.detik);

    return 0;
} 