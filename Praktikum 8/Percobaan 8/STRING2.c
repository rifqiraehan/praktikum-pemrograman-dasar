#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char nama[50], jawab[15];
    static char salam[] = ", Assalamu'alaikum...";
    static char wayang[] = "BimaSena";

    puts("Masukkan nama Anda: "); gets(nama);

    puts("Siapakah nama wayang yang gak bisa duduk?"); gets(jawab);

    puts("");

    if(strlen(salam) + strlen(nama) <= 50)
        strcat(nama, salam);

    puts(nama);
    if(strcmp(wayang, jawab) == 0)
        printf("\nJawaban Anda benar! Hebat!");
    else {
        printf("\nJawaban Anda salah! ");
        printf("\nJawabannya adalah %s", wayang);
    }

    puts("");

    getch();
}