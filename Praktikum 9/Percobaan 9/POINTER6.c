#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char str1[80], str2[90], *ptrx;

    strcpy(str1, "INI ADALAH HURUF BESAR SEMUA!");
    strcpy(str2, "ini adalah huruf kecil semua!");
    ptrx = NULL;

    puts("Isi str1: "); puts(str1);
    puts("Isi str2: "); puts(str2);
    puts("Isi ptrx: "); puts(ptrx);

    ptrx = (char *) calloc(80, sizeof(char));
    ptrx = strlwr(str1);
    puts("\nSetelah 'str1' diproses dengan strlwr(): ");
    puts("Isi str1: "); puts(str1);
    puts("Isi ptrx: "); puts(ptrx);

    ptrx = strupr(str2);
    puts("\nSetelah 'str2' diproses dengan strupr(): ");
    puts("Isi str2: "); puts(str2);
    puts("Isi ptrx: "); puts(ptrx);

    getch();
}