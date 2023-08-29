#include <stdio.h>

int main(){
    float x;
    printf("Masukkan nilai pecahan yang akan ditampilkan: ");
    scanf("%f", &x);

    printf("format e => %e\n", x);
    printf("format f => %f\n", x);
    printf("format g => %g\n", x);

    return 0;
}