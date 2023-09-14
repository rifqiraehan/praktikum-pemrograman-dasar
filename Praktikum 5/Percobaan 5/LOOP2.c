#include <stdio.h>

int main(){
    int n, jumlah;

    printf("TABEL JUMLAH TRIANGULAR\n");
    printf("   n     jumlah\n");
    printf("-----------------------\n");

    jumlah = 0;

    for (n = 1; n <= 10; ++n) {
        jumlah+=n;
        printf("%4d     %4d\n", n, jumlah);
    }

    return 0;
}