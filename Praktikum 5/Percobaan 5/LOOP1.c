#include <stdio.h>

int main(){
    int n, jumlah;

    jumlah = 0;

    for (n = 1; n <= 200; n += 1){
        jumlah+=n;
    }

    printf("Jumlah 200 triangular adalah %d\n", jumlah);

    return 0;
}