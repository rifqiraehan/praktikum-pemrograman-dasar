#include <stdio.h>

int factorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int permutation(int n, int r) {
    if (n < r) {
        return 0;
    }

    return factorial(n) / factorial(n - r);
}

int combination(int n, int r) {
    if (n < r) {
        return 0;
    }

    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
    int n, r;

    printf("Masukkan nilai n = ");
    scanf("%d", &n);

    printf("Masukkan nilai r = ");
    scanf("%d", &r);

    printf("Hasil permutasi = %d\n", permutation(n, r));
    printf("Hasil kombinasi = %d\n", combination(n, r));

    return 0;
}