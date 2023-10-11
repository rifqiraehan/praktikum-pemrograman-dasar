#include <stdio.h>
#include <conio.h>

void main(){
    static char digit_dasar[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        'A', 'B', 'C', 'D', 'E', 'F'
    };

    int konversi[64];
    long int bilangan;
    int digit_ke, dasar, indeks = 0;

    printf("Bilangan yang dikonversikan: ");
    scanf("%ld", &bilangan);
    printf("Dasar bilangan: ");
    scanf("%d", &dasar);

    do{
        konversi[indeks] = bilangan % dasar;
        ++indeks;
        bilangan /= dasar;
    } while (bilangan != 0);

    printf("Angka Konversi: ");

    for (--indeks; indeks >= 0; --indeks) {
        digit_ke = konversi[indeks];
        printf("%c", digit_dasar[digit_ke]);
    }

    getch();
}