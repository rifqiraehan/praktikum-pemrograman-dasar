#include <stdio.h>
#include <math.h>

#define PI 3.14

void luasTabung(){
    float r, T, r2, luas;

    printf("Masukkan Jari-Jari Tabung: ");
    scanf("%f", &r);
    printf("Masukkan Tinggi Tabung: ");
    scanf("%f", &T);

    r2 = pow(r, 2);
    luas = 2*PI*r*T + 2*PI*r2;

    printf("Luas Tabung adalah %.2f cm^2.\n", luas);
}

void volumeTabung(){
    float r, T, r2, volume;


    printf("Masukkan Jari-Jari Tabung: ");
    scanf("%f", &r);
    printf("Masukkan Tinggi Tabung: ");
    scanf("%f", &T);

    r2 = pow(r, 2);
    volume = PI*r2*T;

    printf("Volume Tabung adalah %.2f cm^3.\n", volume);
}

void volumeBola(){
    float r, volume, r3;

    printf("Masukkan Jari-Jari Bola: ");
    scanf("%f", &r);

    r3 = pow(r, 3);
    volume = 4/3*(PI*r3);

    printf("Volume Bola adalah %.2f cm^3.\n", volume);
}

void kuadrat(){
    float a, b, c, y1, y2, discriminant;

    printf("Masukkan Nilai a: ");
    scanf("%f", &a);

    printf("Masukkan Nilai b: ");
    scanf("%f", &b);

    printf("Masukkan Nilai c: ");
    scanf("%f", &c);

    discriminant = b*b-4*a*c;

    y1 = (-b+sqrt(discriminant))/(2*a);
    y2 = (-b-sqrt(discriminant))/(2*a);

    printf("Hasil y1 adalah %.1f\n", y1);
    printf("Hasil y2 adalah %.1f\n", y2);
}

int main(){
    luasTabung();
    // volumeTabung();
    // volumeBola();
    // kuadrat();

    return 0;
}