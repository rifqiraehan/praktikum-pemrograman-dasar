#include <stdio.h>

int main(){
    float bil, x, h = 0;
    char y[2];

    do {
        printf("Masukkan Bilangan = ");
        scanf("%f", &bil);
        x = bil / 2;
        do {
            h = x;
            x = (x + (bil / x)) / 2;
        } while (x != h);
        printf("%f\n", x);

        printf("Apakah program dilanjutkan? (y/n) ");
        scanf("%s", &y);
        } while (y[0] != 'n' && y[0] != 'N');

    return 0;
}