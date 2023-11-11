#include <stdio.h>
#include <conio.h>

struct tanggal{ // definisi global dari tipe tanggal
    int tgl;
    int bulan;
    int tahun;
};

void main(){
    struct tanggal now;

    now.tgl = 9;
    now.bulan = 11;
    now.tahun = 2023;

    printf("Sekarang tanggal: ");
    printf("%d/%d/%d\n", now.tgl, now.bulan, now.tahun);

    getch();
}