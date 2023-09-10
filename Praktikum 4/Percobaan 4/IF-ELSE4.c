#include <stdio.h>
#include <conio.h>

void main(){
    int i = 0, hasil = 1;

ulang:
    i++;
    hasil*=2;

    printf("Iterasi ke %2d: %5d\n", i, hasil);
    if (i < 10) goto ulang;

    getch();
}

/*
    Catatan Rifqi Raehan:
    Pada blok:
    ulang:
    i++;
    hasil*=2;

    printf("Iterasi ke %2d: %5d\n", i, hasil);
    if (i < 10) goto ulang;

    Mempunyai hasil fungsi yang sama dari:
    while (i < 10) {
        ulang:
        i++;
        hasil*=2;

        printf("Iterasi ke %2d: %5d\n", i, hasil);
    }
*/