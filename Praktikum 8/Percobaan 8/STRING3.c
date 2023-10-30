#include <stdio.h>
#include <conio.h>

#define MAKS 256
void main(){
    int i, jumkar;
    char teks[MAKS];

    puts("Masukkan suatu kalimat (maks 255 karakter).");
    puts("Komputer akan menghitung jumlah karakternya.\n");
    fgets(teks, sizeof(teks), stdin);

    jumkar = 0;
    for (i = 0; teks[i]; i++) {
        jumkar++;
    }

    printf("\nJumlah karakter = %d\n", jumkar-1);

    getch();
}

