#include <stdio.h>
#include <conio.h>

float minimum(float x, float y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

void main(){
    float a, b;

    printf("Masukkan nilai a : "); scanf("%f", &a);
    printf("Masukkan nilai b : "); scanf("%f", &b);

    printf("Bilangan terkecil antara %.0f dan %.0f adalah %.0f\n", a, b, minimum(a, b));

    getch();
}