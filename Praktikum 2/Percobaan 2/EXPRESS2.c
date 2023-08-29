#include <stdio.h>

int main(){
    int a, b, c, d, hasil;

    printf("Masukkan nilai a b = "); scanf("%d %d", &a, &b);
    printf("Masukkan nilai c d = "); scanf("%d %d", &c, &d);
    printf("\na = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

    hasil = a - b;
    printf("Hasil dari a - b adalah %d\n", hasil);

    hasil = c + d;
    printf("Hasil dari c + d adalah %d\n", hasil);

    hasil = b * c;
    printf("Hasil dari b * c adalah %d\n", hasil);

    hasil = a / c;
    printf("Hasil dari a / c adalah %d\n", hasil);

    hasil = a + b * c;
    printf("Hasil dari a + b * c adalah %d\n", hasil);

    hasil = a * b + c * d;
    printf("Hasil dari a * b + c * d adalah %d\n", hasil);

    return 0;
}