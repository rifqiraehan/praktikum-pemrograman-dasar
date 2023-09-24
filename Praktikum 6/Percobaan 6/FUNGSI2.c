#include <stdio.h>
#include <conio.h>

void hitung_triangular(int n) {
    int i, jumlah = 0;

    for (i = 0; i <= n; i++) {
        jumlah += i;
    }

    printf("Jumlah triangular %d adalah %d\n", n, jumlah);
}

void main(){
    hitung_triangular(10);
    hitung_triangular(20);
    hitung_triangular(50);

    getch();
}