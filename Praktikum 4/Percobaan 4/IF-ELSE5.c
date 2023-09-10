#include <stdio.h>
#include <conio.h>

void main(){
    char tag;

    printf("Masukkan tipe tag ( 2 / 4 ): "); scanf("%c", &tag);

    if (tag == '2') {
        printf("Merk sepeda motor bertipe 2 tag\n\n");
        printf("1. YA MAHA\n");
        printf("2. YA SUZUKI\n");
        printf("3. YA HONDA\n");
    } else {
        printf("Merk sepeda motor bertipe 4 tag\n\n");
        printf("1. MAHA\n");
        printf("2. SUZUKI\n");
        printf("3. HONDA\n");
    }

    getch();
}