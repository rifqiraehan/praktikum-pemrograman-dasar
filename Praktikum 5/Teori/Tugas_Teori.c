#include <stdio.h>
#include <conio.h>

void main(){
    int a, b, c, d, e, sum;

    printf("PREDIKSI PESULAP MERAH\n\n");

    printf("Masukkan bilangan pertama  : ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua    : ");
    scanf("%d", &b);
    printf("Masukkan bilangan ketiga   : ");
    scanf("%d", &c);

    printf("\nTULIS DI PAPAN PREDIKSI ANDA...\n\n");
    printf("Masukkan bilangan keempat  : ");
    scanf("%d", &d);
    printf("Masukkan bilangan kelima   : ");
    scanf("%d", &e);

    printf("\nKomputer akan menebak bilangan ANDA!\n\n");
    printf("Tekan [Enter]\n\n");
    printf("=====================\n");
    printf("MENURUT PENERAWANGAN\n");

    sum = a + b + c + d + e;

    printf("PREDIKSI ANDA = %d\n", sum);
    printf("=====================\n");

    getch();
}