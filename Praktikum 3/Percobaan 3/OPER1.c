#include <stdio.h>

int main(){
    int x, y;

    printf("Masukkan nilai x: ");
    scanf("%d", &x);
    printf("Masukkan nilai y: ");
    scanf("%d", &y);

    printf("\nNilai %d < %d adalah %d\n", x, y, x < y);
    printf("Nilai %d > %d adalah %d\n", x, y, x > y);
    printf("Nilai %d == %d adalah %d\n", x, y, x == y);
    printf("Nilai %d <= %d adalah %d\n", x, y, x <= y);
    printf("Nilai %d >= %d adalah %d\n", x, y, x >= y);
    printf("Nilai %d != %d adalah %d\n", x, y, x != y);

}