#include <stdio.h>
#include <conio.h>

void main(){
    int y, x = 2002; // x dan y bertipe int
    int *px; // var pointer menunjuk data tipe int

    px = &x; // px diisi alamat dari variabel x
    y = *px; // y diisi nilai yang ditunjuk oleh px

    printf("Alamat x  = %p\n", &x);
    printf("Isi px    = %p\n", px);
    printf("Isi x     = %d\n", x);
    printf("Nilai *px = %d\n", *px);
    printf("Nilai y   = %d\n", y);

    getch();
}