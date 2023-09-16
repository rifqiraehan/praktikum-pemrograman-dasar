#include <stdio.h>

int main(){
    float n, nilai, max, min, average;

    printf("Masukkan banyaknya data nilai = ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++){
        printf("Masukkan data nilai ke-%d = ", i);
        scanf("%f", &nilai);

        if (i == 1){
            max = nilai;
            min = nilai;
        } else {
            if (nilai > max){
                max = nilai;
            } else if (nilai < min){
                min = nilai;
            }
        }

        average += nilai;
    }

    printf("Nilai terbesar adalah = %.2f\n", max);
    printf("Nilai terkecil adalah = %.2f\n", min);
    printf("Nilai rata-rata nya adalah = %.2f\n", average / n);

    return 0;
}