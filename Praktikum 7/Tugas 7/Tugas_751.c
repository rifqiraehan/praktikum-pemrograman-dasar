#include <stdio.h>

int main(){
    int i, n, data[5], total = 0;
    printf("Masukkan jumlah data yang diinginkan: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nIsi data sebagai berikut:\n");
    for (i = 0; i < n; i++) {
        printf("data ke-%d adalah %d\n", i + 1, data[i]);
    }

    return 0;
}