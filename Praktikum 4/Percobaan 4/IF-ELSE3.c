#include <stdio.h>
#include <conio.h>

void main(){
    char c;

    printf("Masukkan suatu karakter: "); scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
        printf("\nKarakter tersebut termasuk huruf kecil.\n");
    else
        printf("\nKarakter tersebut bukan huruf kecil.\n");

    getch();
}