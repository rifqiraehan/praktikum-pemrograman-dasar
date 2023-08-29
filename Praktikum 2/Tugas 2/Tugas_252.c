#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
    float x, y, z, xpow, ypow;
    printf("Formula: y = 3x^2 + 6x + 9\n");
    printf("Masukkan Nilai x = ");
    scanf("%f", &x);

    xpow = pow(x, 2);
    y = (float) 3 * xpow + 6 * x + 9;

    ypow = pow(y, 2);
    z = (float) (2 * ypow + 5 * xpow) / (9 * y);

    printf("Didapatkan nilai y = %.0f dan nilai z = %f\n", y, z);

    return 0;
}