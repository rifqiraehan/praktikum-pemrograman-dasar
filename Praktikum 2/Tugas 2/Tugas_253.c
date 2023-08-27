#include <stdio.h>
#include <math.h>

int main(){
    float keliling, luas, jari2;
    const float PI = 3.14;

    printf("Masukkan jari-jari lingkaran = ");
    scanf("%f", &jari2);

    keliling = 2 * PI * jari2;
    luas = PI * pow(jari2, 2);

    printf("Keliling lingkaran dengan jari-jari %.0f adalah = %.2f\n", jari2, keliling);
    printf("Luas lingkaran dengan jari-jari %.0f adalah = %.2f\n", jari2, luas);

    return 0;
}