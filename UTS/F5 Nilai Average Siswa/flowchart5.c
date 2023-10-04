/* Program yang menentukan nilai rata-rata siswa. */
#include <stdio.h>

int main(){
    int i, n;
    float nilai, total = 0, rata2;

    printf("Masukkan banyak nilai: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%f", &nilai);
        total += nilai;
    }

    rata2 = total / n;

    printf("Nilai rata-rata: %.2f\n", rata2);

    return 0;
}