#include <stdio.h>

int main(){
    float p1 = 123.45678, p2;
    int b1, b2 = -150;

    b1 = p1; // Konversi Pecahan ke Bulat
    printf("%f disimpan ke int menghasilkan %d\n\n", p1, b1);

    p1 = b2; // Konversi Bulat ke Pecahan
    printf("%d disimpan ke float menghasilkan %f\n\n", b2, p1);

    p1 = b2 / 100; // Bulat dibagi Bulat
    printf("%d dibagi 100 menghasilkan %fd\n\n", b2, p1);

    p2 = b2 / 100.0; // Bulat dibagi Pecahan
    printf("%d dibagi 100 menghasilkan %f\n\n", b2, p2);

    return 0;
}