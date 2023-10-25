#include <stdio.h>

int main(){
    int kodeBulan[12] = {1||0, 4||3, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
    int kodeHari[7] = {0, 1, 2, 3, 4, 5, 6};
    int tanggal, bulan, tahun, hari;
    printf("Masukkan tanggal (dd-mm-yy): ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    // Formula yang hanya berlaku untuk tahun 1900-1999
    hari = (tanggal + kodeBulan[bulan - 1] + tahun + tahun / 4) % 7;

    printf("Tanggal tersebut adalah hari ");
    switch (hari) {
        case 0:
            printf("Sabtu");
            break;
        case 1:
            printf("Minggu");
            break;
        case 2:
            printf("Senin");
            break;
        case 3:
            printf("Selasa");
            break;
        case 4:
            printf("Rabu");
            break;
        case 5:
            printf("Kamis");
            break;
        case 6:
            printf("Jumat");
            break;
    }
    printf(".\n");

    return 0;
}