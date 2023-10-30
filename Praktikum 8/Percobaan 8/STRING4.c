#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char str1[50], str2[50], kar, po;

    strcpy(str1, "0--------1---------2---------3");
    strcpy(str2, "-> KUCARI KAMU UNTUK KUTANGKAP.");
    puts("Isi dari str1 = "); puts(str1);
    puts("Isi dari str2 = "); puts(str2);
    printf("\nPosisi huruf pada string dapat dicari");
    printf("\nmenggunakan rumus p = strchr(str2, kar)\n");
    kar = 'G';
    po = strchr(str2, kar) - str2;
    printf("\nKarakter '%c' ditemukan pada posisi ke-%d", kar, po);

    getch();
}