#include <stdio.h>

int main(){
    int bil1, bil2, sisa;

    printf("Masukkan bilangan positif pertama = ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan positif kedua = ");
    scanf("%d", &bil2);

    while (bil2 != 0) {
        sisa = bil1 % bil2;
        bil1 = bil2;
        bil2 = sisa;
    }

    printf("Pembagi bersama terbaik dari keduanya = %d\n", bil1);

    return 0;
}