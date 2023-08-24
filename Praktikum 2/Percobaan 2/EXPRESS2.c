#include <stdio.h>

int main(){
    int a, b, c, d, hasil;

    printf("\nMasukkan nilai a b = ");
    scanf("%d %d", &a, &b);
    printf("\nMasukkan nilai c d = ");
    scanf("%d %d", &c, &d);
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    hasil = a - b;
    printf("\nHasil dari a - b adalah %d\n", hasil);

    hasil = c + d;
    printf("\nHasil dari c + d adalah %d\n", hasil);

    hasil = b * c;
    printf("\nHasil dari b * c adalah %d\n", hasil);

    hasil = a / c;
    printf("\nHasil dari a / c adalah %d\n", hasil);

    hasil = a + b * c;
    printf("\nHasil dari a + b * c adalah %d\n", hasil);

    hasil = a * b + c * d;
    printf("\nHasil dari a * b + c * d adalah %d\n", hasil);

    return 0;
}