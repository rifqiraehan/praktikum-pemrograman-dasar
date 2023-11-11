#include <stdio.h>
#include <conio.h>

struct tanggal{ // definisi global dari tipe tanggal
    int tgl;
    int bln;
    int thn;
};

void cetak_tgl(struct tanggal now){
    static char *bulan[] = {
        "Kode bulan salah",
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember"
    };

    printf("\nTanggal sekarang adalah: ");
    printf("%d %s %d\n", now.tgl, bulan[now.bln], now.thn);
}

void main(){
    struct tanggal skr;

    system("cls");
    printf("Masukkan tanggal hari ini (tgl/bln/thn): ");
    scanf("%d/%d/%d", &skr.tgl, &skr.bln, &skr.thn);

    cetak_tgl(skr);

    getch();
}