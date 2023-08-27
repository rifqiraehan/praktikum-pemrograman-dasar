#include <stdio.h>

int main(){
    int x, y, n, m;

    printf("Masukkan nilai x = ");
    scanf("%d", &x);
    printf("Masukkan nilai y = ");
    scanf("%d", &y);

    n = (x < 10) && (y > 10);
    m = (x > 10) || (y < 10);

    printf("Nilai dari %d < 10 && %d > 10 adalah = %d\n", x, y, n);
    printf("Nilai dari %d > 10 || %d < 10 adalah = %d\n", x, y, m);

    return 0;
}