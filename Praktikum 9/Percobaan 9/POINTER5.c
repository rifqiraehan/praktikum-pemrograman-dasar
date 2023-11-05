#include <stdio.h>
#include <conio.h>

char *nama_bulan(int n) {
    static char *bulan[] = {
        "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli",
        "Agustus", "September", "Oktober", "November", "Desember"
    };

    return ((n < 1 || n > 12) ? bulan[0] : bulan[n - 1]);
}

void main(){
    int bl;

    printf("Masukkan kode bulan [1..12]: ");
    scanf("%d", &bl);
    printf("Bulan ke-%d adalah %s\n", bl, nama_bulan(bl));

    getch();
}