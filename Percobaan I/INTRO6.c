#include <stdio.h>
#include <conio.h>

#define PI 3.14

void main(){
    float jari2 = 10, luas, keliling;

    luas = PI * jari2 * jari2;
    keliling = 2 * PI * jari2;

    printf("Luas Lingkaran berjari-jari %.2f adalah %.2f\n", jari2, luas);
    printf("\nKeliling lingkarannya adalah %.2f\n", keliling);

    getch();
}