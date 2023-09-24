#include <stdio.h>

int permutation(int n, int r){
    int result = 1;

    for(int i = 0; i < r; i++){
        result *= n;
        n--;
    }

    return result;
}

int combination(int n, int r){
    int result = 1;

    for(int i = 0; i < r; i++){
        result *= n;
        n--;
    }

    for(int i = 0; i < r; i++){
        result /= r;
        r--;
    }

    return result;
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