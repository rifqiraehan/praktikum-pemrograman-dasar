#include <stdio.h>

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main(){
    int n;

    printf("Masukkan n: ");
    scanf("%ld", &n);

    printf("%ld! = %ld\n", n, faktorial(n));

    return 0;
}