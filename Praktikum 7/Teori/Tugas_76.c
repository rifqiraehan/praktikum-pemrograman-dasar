#include <stdio.h>

int main(){
    int tanggal, bulan, tahun;
    int kodeHariBulan[12] = {6||0, 3||4, 3, 0, 5, 2, 0, 4, 1, 6, 3, 1};
    int kodeHariPasaran[12] = {0||1, 4||0, 1, 0, 0, 4, 4, 3, 2, 2, 1, 1};

    printf("Masukkan tanggal (dd-mm-yy): ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    int hari = (tanggal + tahun + tahun / 4 - kodeHariBulan[bulan - 1]) % 7;
    int pasaran = (tanggal + tahun / 4 - kodeHariPasaran[bulan - 1]) % 5;

    printf("Tanggal tersebut adalah hari ");
    switch (hari - 1) {
        case 0: printf("Sabtu"); break;
        case 1: printf("Minggu"); break;
        case 2: printf("Senin"); break;
        case 3: printf("Selasa"); break;
        case 4: printf("Rabu"); break;
        case 5: printf("Kamis"); break;
        case 6: printf("Jumat"); break;
    }
    printf(" dan pasaran ");
    switch (pasaran) {
        case 0: printf("Legi"); break;
        case 1: printf("Pahing"); break;
        case 2: printf("Pon"); break;
        case 3: printf("Wage"); break;
        case 4: printf("Kliwon"); break;
    }
    printf(".\n");
    return 0;
}