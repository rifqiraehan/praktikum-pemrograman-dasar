#include <stdio.h>
#include <conio.h>

int main(){
    int bil, absolut;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bil);

    if (bil < 0) absolut = -bil;

    printf("Nilai absolut dari %d adalah = %d\n", bil, absolut);

    getch();
}

/*
    Catatan Rifqi Raehan:
    Pada blok:
    if (bil < 0) absolut = -bil;

    Mempunyai hasil fungsi yang sama dari:
    if (bil < 0) {
        absolut = -bil;
    }
*/