#include <stdio.h>

int main(){
    int i, n;
    float nilai, total, rata;

    printf("Masukkan banyaknya data nilai = ");
    scanf("%d", &n);

    total = 0;

    for (i = 1; i <= n; i++){
        printf("Masukkan data nilai ke-%d = ", i);
        scanf("%f", &nilai);

        total = total + nilai;
    }

    printf("Jumlah seluruh nilai adalah = %.2f\n", total);

    rata = total / n;

    printf("Nilai rata-rata nya adalah = %.2f\n", rata);

    return 0;
}